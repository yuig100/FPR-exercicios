#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
	
	int numero;
	
	struct arvore *esquerdo,*direita,*sobe;
	
}sarvore;

void insercao(sarvore **pRaiz, int numero2)
{
	if (*pRaiz == NULL)
	{
	      *pRaiz=(sarvore*)malloc(sizeof (sarvore));
	      (*pRaiz)->esquerdo=NULL;
	      (*pRaiz)->direita=NULL;
	      (*pRaiz)->numero=numero2;
	}
	else 
        {
		if (numero2 < ((*pRaiz)->numero))
		{
			insercao(&((*pRaiz)->esquerdo), numero2);
		}
		else
		{
			insercao(&((*pRaiz)->direita), numero2);
		}
	}
}
//
void exibirEmOrdem(sarvore *pRaiz){
    if(pRaiz != NULL){
        exibirEmOrdem(pRaiz->esquerdo);
        printf("\n%i", pRaiz->numero);
        exibirEmOrdem(pRaiz->direita);
    }
    printf("\n");
}
//
main(){
	
	sarvore *inicio=NULL;
	
	int opcao=0,numero=0;
	
	do{
		printf("Digite 1 para acrescentar\n");
		printf("Digite 2 para printar\n");
		scanf("%i",&opcao);
		if(opcao==1){
			printf("Digite um numero\n");
			scanf("%i",&numero);
			insercao(&inicio,numero);
			
		} else if(opcao==2){
			
			exibirEmOrdem(inicio);
			
		} 
		
	}while(opcao!=3);
	return 0;
}
