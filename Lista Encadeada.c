#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	
	int numero;
	
	struct no *prox;

}no;

//inserir no inicio

no *inserir_inicio(no *inicio,int x){
	
	no *aux=NULL;
	
	aux=malloc(sizeof(no));
	
	aux->numero=x;
	aux->prox=inicio;
	inicio=aux;
		
	return (inicio);
}

//printar
no *printar(no *inicio){
	
	no *aux=NULL;
	aux=malloc(sizeof(no));
	aux=inicio;
	while(aux!=NULL){
		printf("%i ",aux->numero);
		aux=aux->prox;
	}
	printf("\n");
}

//inserir no fim

no *inserir_fim(no *inicio,int x){
	
	no *aux=NULL,*aux2=NULL;
	
	aux=malloc(sizeof(no));
	aux2=malloc(sizeof(no));
	
	aux2->numero=x;
	aux2->prox=NULL;
	
	if(inicio == NULL){
		
		inicio=aux2;
		
	} else {
		
		aux=inicio;
		
		while(aux->prox!=NULL){
			
			aux=aux->prox;
		}
		
		aux->prox=aux2;
	}
	
	
	return inicio;
}

//remover inicio

no *remover_inicio(no *inicio){
	
	no *aux=NULL;
	
	aux=malloc(sizeof(no));
	
	if(inicio == NULL){
		
		printf("Não tem nada para remover\n");
		
	} else {
		aux=inicio;
		
		inicio=inicio->prox;
		
		free(aux);
	}
	
	return inicio;
}

// remover fim

no *remover_fim(no *inicio){
	
	no *aux=NULL,*aux2=NULL;
	
	aux=malloc(sizeof(no));
	aux2=malloc(sizeof(no));
		
	if(inicio == NULL){
		
		printf("Não tem nada para remover\n");
		
	} else {
		aux=inicio;
	
		while (aux->prox!=NULL){
		
		aux2=aux;
		aux=aux->prox;
		
	}
	
		aux2->prox=NULL;
		free(aux);
		
	}
	
	return inicio;
}

main(){
	
	no *inicio=NULL;
	int x,escolha;
	
	do{
		
	printf("Digite 1 para inserir no inicio\n");
	printf("Digite 2 para inserir no fim\n");
	printf("Digite 3 para remover no inicio\n");
	printf("Digite 4 para remover no fim\n");
	printf("Digite 5 para printar\n");
	printf("Digite 6 para sair\n");
	
	scanf("%i",&escolha);	
	
	
	if(escolha == 1){
		
		printf("Digite um valor\n");
		scanf("%i",&x);
		inicio=inserir_inicio(inicio,x);
		
	} else if(escolha == 5){
		
		printar(inicio);
		
	} else if(escolha == 2){
		
		printf("Digite um valor\n");
		scanf("%i",&x);
		inicio=inserir_fim(inicio,x);
		
	} else if(escolha == 3){
		
		inicio=remover_inicio(inicio);
		
	} else if(escolha == 4){
		
		inicio=remover_fim(inicio);
		
	}

	}while(escolha != 6);
	
	
}
