#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	
	int numero;
	
	struct lista *prox;
	
}slista;

slista *inserir(slista *vetor,int n){
	
	slista *aux=NULL,*aux2=NULL;
	
	aux=malloc(sizeof(slista));
	aux2=malloc(sizeof(slista));
	
	
	aux2->numero=n;
	aux2->prox=NULL;
	if(vetor == NULL){
		
	vetor = aux2;
		
	} else {
		aux=vetor;
		while(aux->prox != NULL){
			
			aux=aux->prox;
			
		}
		
		aux->prox = aux2;  
		
	}
	
	return vetor;
}

void printar(slista *vetor,int i){
	int a,b,c;
	
	while(vetor != NULL){
		a=vetor;
		b=vetor->numero;
		c=vetor->prox;
		printf("[%i]-(vetor: %i numero: %i proximo: %i)\n",i,a,b,c);
		vetor=vetor->prox;
	} 
	
	
	printf("\n");
}

main(){
	
	FILE *arq;
	char nome_arquivo[100];
	
	printf("Digite o nome do arquivo\n");
	gets(nome_arquivo);
	
	arq=fopen(nome_arquivo,"r");
	
	int n=10,numero;
	
	slista *vetor[n];
	
	int i;
	
	for(i=0;i<n;i++){
		
		vetor[i]=NULL;
		
	}
	
	while(fscanf(arq,"%i",&numero) != EOF){
		for(i=1;i<10;i++){
			
			if(numero % i == 0){
			
			vetor[i]=inserir(vetor[i],numero);
			
			}
			
		}
		
	}
	
	for(i=1;i<10;i++){
			
			printar(vetor[i],i);
			
		}
	fclose(arq);
}
