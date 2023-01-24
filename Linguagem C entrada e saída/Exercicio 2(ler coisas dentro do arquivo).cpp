#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){
	
	FILE *arq;
	
	char nome[100],recebe[100];
	
	printf("Digite o nome do arquivo + extensao\n");
	
	gets(nome);
	
	arq=fopen(nome,"r");
	
	while(fgets(recebe,100,arq)!=NULL){
		
		printf("%s",recebe);
		
	}
	
	fclose(arq);
	
}
