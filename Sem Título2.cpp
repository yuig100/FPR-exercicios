#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	
	int numero;
	
	struct lista *prox;
	
}slista;

//acrescentar no inicio
slista* acrescentar_inicio(slista *inicio,int x){
	
	slista *aux;
	
	aux=(slista*)malloc(sizeof(slista));
	
	aux->numero=x;
	aux->prox=inicio;
	inicio=aux;
	
	return inicio;
}

//acrescentar no fim
slista* acrescentar_fim(slista *inicio,int x){
	
	slista *aux=NULL,*aux2=NULL;
	
	aux=(slista*)malloc(sizeof(slista));
	
	aux->numero=x;
	aux->prox=NULL;
	
	if(inicio==NULL){
		
		inicio=aux;
		
	} else {
		aux2=inicio;
		while(aux2->prox!=NULL){
			
			aux2=aux2->prox;
			
		}
		aux2->prox=aux;
	}
	return inicio;
}

//remover do inicio
slista* remover_inicio(slista *inicio){
	
	slista *aux=NULL;
	aux=inicio;
	inicio=inicio->prox;
	free(aux);
	return inicio;
}

//remover do fim
slista* remover_fim(slista *inicio){
	
	slista *aux=NULL,*aux2=NULL;
	aux=(slista*)malloc(sizeof(slista));
	aux2=(slista*)malloc(sizeof(slista));
	
	aux=inicio;
	while(aux->prox!=NULL){
		aux2=aux;
		aux=aux->prox;	
		
	}
	
	aux2->prox=NULL;
	
	return inicio;
}
//printar

void printar(slista *inicio){
	
	while(inicio!=NULL){
		
		printf("%i / %i\n",inicio->numero,inicio->prox);
		inicio=inicio->prox;
		
	}
	
	
}
main(){
	
	slista *inicio=NULL;
	int opcao=0,valor;
	
	do{
		printf("Digite 1 para acrescentar no inicio\n");
		printf("Digite 2 para acrescentar no fim\n");
		printf("Digite 3 para remover do inicio\n");
		printf("Digite 4 para remover do fim\n");
		printf("Digite 5 para printar\n");
		printf("Digite 6 para sair\n");
		
		scanf("%i",&opcao);
		
		if(opcao==1){
			
			printf("Digite um valor\n");
			scanf("%i",&valor);
			
			inicio=acrescentar_inicio(inicio,valor);
			
		} else if(opcao==2){
			
			printf("Digite um valor\n");
			scanf("%i",&valor);
			
			inicio=acrescentar_fim(inicio,valor);
			
		} else if(opcao==3) {
			
			inicio=remover_inicio(inicio);
			
		} else if(opcao==4) {
			
			inicio=remover_fim(inicio);
			
		} else if(opcao==5) {
			
			printar(inicio);
			
		} else {
			
			printf("Você digitou o numero errado\n");
			
		}
		
	}while(opcao!=6);
	return 0;
}
