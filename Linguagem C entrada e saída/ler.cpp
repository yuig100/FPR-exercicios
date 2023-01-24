#include <stdlib.h>
#include <stdio.h>

main()
{
	FILE *arq;
	int i;
	char Linha[100];
	char *result;
	arq = fopen("Teste.dat", "rt");
	
	while (!feof(arq))
  {
	
      result = fgets(Linha, 100, arq);  
      if (result)  
	  printf("%s",Linha);
      i++;
  }
  fclose(arq);
	
	
	
	
	
	
	
	
	
	
	
	
	
}
