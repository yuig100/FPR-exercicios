#include <stdio.h>

main(){
	
	FILE *arq;
	
	arq = fopen("arq.txt","r");
	
	char frase[100];
	
	while (fgets(frase,100,arq) !=NULL){printf("%s",frase);
	}
	
	fclose(arq);
	
	return 0;
	
}
