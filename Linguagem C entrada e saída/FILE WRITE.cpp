#include <stdio.h>

main(){
	
	FILE *arquivo;
	
	arquivo = fopen ("teste.txt", "w");
	
	fprintf(arquivo,"Pedro Henrique Massa da Silva Gomes");
	
	fclose(arquivo);
	
	return 0;
	
}

