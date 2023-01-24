#include <stdio.h>
#include <stdlib.h>

int potencia(int b, int e)
{
	if(e==0)
	{
		return 1;
	}
	else
	if(e==1)
	{
		return b;	
	}	
	else
	{
		return (b*potencia( b,e-1));
	}
	
}

void main()
{
	int b,e;
	scanf("%d %d",&b,&e);
	printf("Valor pos potencia: %d",potencia(b,e));
}
