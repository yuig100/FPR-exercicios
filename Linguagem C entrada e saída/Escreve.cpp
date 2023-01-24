#include <stdlib.h>
#include <stdio.h>

main()
{

int n,a,i;

FILE *arq;

//tamanho do vetor
scanf("%i",&n);

//numero final
scanf("%i",&a);

int V[n];

arq = fopen("Teste.dat","w");

fprintf(arq,"%i %i \n",n,a);

for (i=0;i<n;i++)
{

V[i] = rand() % a;
fprintf(arq,"%i \n",V[i]);

}

fclose(arq);	
	
return 0;	
	
}
