#include <stdio.h>
#include <stdlib.h>

typedef struct ficha{
	
	int codigo;
	char nome[40];
	char email[40];
	float megabytes;
	char escolha;
	struct ficha *prox;
	
}sficha;

//inserindo na ficha

sficha *inserir(sficha *inicio,int codigo,char *nome_cliente,char *email_cliente,float mega_bytes,char escolha){
	
	int i;
	sficha *aux=NULL,*aux2=NULL;
	
	aux=malloc(sizeof(sficha));
	aux2=malloc(sizeof(sficha));
	
	aux->codigo=codigo;
	for(i=0;i<40;i++){
		
		aux->nome[i]=nome_cliente[i];
		aux->email[i]=email_cliente[i];	
		
	}
	aux->megabytes=mega_bytes;
	aux->escolha=escolha;
	aux->prox=NULL;
	
	if(inicio == NULL){
		
		inicio = aux;
		
	} else {
		
		aux2 = inicio;
		
		while(aux2->prox != NULL){
			
			aux2=aux2->prox;
			
		}
		
		aux2->prox=aux;
		
	}
	
	return inicio;
}

//printando a ficha pelo codigo

void printar(sficha *inicio,int cod){
	
	while(inicio->codigo!=cod){
		
		inicio=inicio->prox;
		
	}
	
	printf("Codigo: %i\n",inicio->codigo);
	printf("Nome: %s\n",inicio->nome);
	printf("Email: %s\n",inicio->email);
	printf("Megabytes: %.2f\n",inicio->megabytes);
	printf("Possui pagina: %c\n",inicio->escolha);
	
}

//

main(){
	//numero clientes
	int numero_clientes;
	printf("Digite o numero de cliente \n");
	scanf("%i",&numero_clientes);
	
	//abrindo arquivo
	FILE *arq;
	arq=fopen("relatorio.dat","w");
	
	//variaveis
	sficha *inicio=NULL;
	int i;
	int cod[numero_clientes];
	char nome_cliente[40];
	char email_cliente[40];
	float megabytes_cliente;
	char escolha_cliente;
	float valortotal[numero_clientes];
	int posicao[numero_clientes];
	
	
	for(i=0; i < numero_clientes;i++){
	
	printf("Digite o codigo do %i cliente\n",i+1);
	scanf("%i",&cod[i]);
	fflush(stdin);
	
	printf("Digite o nome do %i cliente\n",i+1);
	gets(nome_cliente);
	fflush(stdin);
	
	printf("Digite o email do %i cliente\n",i+1);
	gets(email_cliente);
	fflush(stdin);
		
	printf("Digite a quantidade de megabytes utilizado do %i cliente\n",i+1);
	scanf("%f",&megabytes_cliente);
	fflush(stdin);
	
	printf("O %i cliente possui pagina pessoal s/n \n",i+1);
	scanf("%c",&escolha_cliente);
	
	
	inicio = inserir(inicio,cod[i],nome_cliente,email_cliente,megabytes_cliente,escolha_cliente);	
	
	if(megabytes_cliente <= 2048){
		
		valortotal[i]=95;
		
	} else{
		
		valortotal[i]=95 + ((megabytes_cliente-2048) * 0.5);
		
	}
	
	if(escolha_cliente == 's'){
		
		valortotal[i]=valortotal[i]+40;
		
	}
	
	fprintf(arq,"O %i cliente deve %.2f reais \n",i+1,valortotal[i]);
	
	}
	
	fclose(arq);
	
	int j,aux;
	for(i=0;i<numero_clientes;i++){
		for(j=i+1;j<numero_clientes;j++){
			
			if(valortotal[i]>valortotal[j]){
				
				aux=valortotal[i];
				valortotal[i]=valortotal[j];
				valortotal[j]=aux;
				
				aux=cod[i];
				cod[i]=cod[j];
				cod[j]=aux;	
				
			}	
		}
	}
	
	printf("O maior e: \n");
	printar(inicio,cod[numero_clientes-1]);
	printf("O menor e: \n");
	printar(inicio,cod[0]);
	
	system ("pause");
	return 0;
}
