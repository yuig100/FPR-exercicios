#include <stdio.h>

main(){
	
	FILE *arquivo;
	
	arquivo = fopen("teste.txt","r");
	
	int a,b,c,d,e,f;
	
	fscanf(arquivo,"%i %i %i %i %i %i",&a,&b,&c,&d,&e,&f);
	
	printf("%i %i %i \n \n%i %i %i",a,b,c,d,e,f);
	
	fclose(arquivo);
	
	return 0;
}
