#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){
	
	FILE *arq;
	
	int a,n,i;
	
	char nome[100];
	
	printf("Digite o nome do arquivo + extensao\n");
	
	gets(nome);
	
	arq=fopen(nome,"w");
	
	printf("Digite o A e o N\n");
	
	scanf("%i %i",&a,&n);
	
	fprintf(arq,"%i %i\n",a,n);
	
	for(i=0;i<n;i++){
		
		fprintf(arq,"%i ",rand() % a);
		
	}
	
	fclose(arq);
	
}
