#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	
	int numero;
	struct lista *prox;
	
}slista;

//inserir inicio

slista* inseririnicio(slista *ini, int x){
	
	slista *aux=NULL;
	
	aux=(slista*)malloc(sizeof(slista));
	
	aux->numero=x;
	aux->prox=ini;
	ini=aux;
	return ini;
}

//inserir no fim

slista* inserirfim(slista *ini,int x){
	
	slista *aux=NULL,*aux2=NULL;
	
	aux=(slista*)malloc(sizeof(slista));
	
	aux->numero=x;
	aux->prox=NULL;
	
	if(ini == NULL){
		
		ini = aux;
		
	} else {
		
		aux2 = ini;
		
		while(aux2->prox !=NULL){
			
			aux2 = aux2->prox;
			
		}
		aux2->prox = aux;
	}
	
	return ini;
}

//remover inicio

slista* removerinicio(slista *ini){
	
	if(ini==NULL){
		
		printf("A lista está vazia\n");
		
	} else {
		
		slista *aux;
		aux=ini;
		ini=ini->prox;
		free(aux);
	}
	return ini;
}

//remover fim

slista* removerfim(slista *ini){
	
	slista *aux=NULL,*aux2=NULL;
	
	if(ini==NULL){
		
		printf("A lista está vazia\n");
		
	} else {
		
		aux=ini;
		
		while(aux->prox !=NULL){
			
			aux2=aux;
			aux=aux->prox;
		}
		
		aux2->prox =NULL;
		free(aux);
	}
	return aux;
	
}

//printar

printlista(slista *ini){
	
	slista *aux;
	
	if(ini==NULL){
		
		printf("A lista esta vazia\n");
		
	} else {
		
		aux = ini;
		while(aux!=NULL){
			
			printf("%i/%i->",aux->numero,aux);
			aux=aux->prox;
			
		}
		printf("NULL");
		printf("\n");		
	}

}

//

//

//main
main(){
	
	slista *ini=NULL;
	
	int opcao,x;
	
	int continuar=1;
	
	do{
		
		printf("Digite 1 para inserio no inicio\n");
		printf("Digite 2 para inserir no fim\n");
		printf("Digite 3 remover inicio\n");
		printf("Digite 4 remover fim\n");
		printf("Digite 5 printar\n");
		
		scanf("%i",&opcao);
		
		if(opcao==1){
		
			printf("Digite um numero\n");
			scanf("%i",&x);
			
			ini=inseririnicio(ini,x);
				
		} else if(opcao==2){
			
			printf("Digite um numero\n");
			scanf("%i",&x);
			
			ini=inserirfim(ini,x);
			
		} else if(opcao==3){
			
			printf("Digite um numero\n");
			scanf("%i",&x);
			
			ini=removerinicio(ini);
			
		} else if(opcao==4){
			
			printf("Digite um numero\n");
			scanf("%i",&x);
			
			ini=removerfim(ini);
			
		} else if(opcao==5){
			
			printlista(ini);
			
		} else {
			
			printf("Numero errado \n");
			
		}
		
		printf("Digite 1 para continuar e 2 para parar\n");
		scanf("%i",&continuar);
		
	}while(continuar==1);
	
	return 0;
}
