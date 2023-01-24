#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{

	int numero;
	struct arvore *esquerdo,*direito;

}arvore;

//inserir
arvore *inserir(arvore *inicio,int x){
	
	
	if(inicio == NULL){
		
		inicio=malloc(sizeof(arvore));
		inicio->esquerdo=NULL;
		inicio->direito=NULL;
		inicio->numero=x;
		
	} else if(x > inicio->numero){
		
		inicio->direito=inserir(inicio->direito,x);
		
	} else if(x < inicio->numero){
		
		inicio->esquerdo=inserir(inicio->esquerdo,x);
		
	}
	
	return inicio;
} 

//printar

void em_ordem(arvore *inicio){
	
	if(inicio != NULL){
		
		em_ordem(inicio->esquerdo);
		printf("\n%i",inicio->numero);
		em_ordem(inicio->direito);
	}
	
	printf("\n");
}


main(){
	
	int escolha,x;
	arvore *inicio=NULL;
	
	do{
		
	printf("Digite 1 para numero\n");
	printf("Digite 2 para print\n");
	printf("Digite 3 para sair\n");
	scanf("%i",&escolha);
		
		if(escolha == 1){
			printf("Digite um numero\n");
			scanf("%i",&x);
			
			inicio=inserir(inicio,x);
			
			
		} else if(escolha == 2){
			
			em_ordem(inicio);
			
		} 
		
	}while(escolha != 3);
	
	
}
