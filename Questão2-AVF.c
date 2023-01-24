#include <stdio.h>
#include <stdlib.h>

int tribonacci(int n,int *i){
	
	*i=*i+1;
	
	if(n == 0 || n == 1){
		
		return 0;
		
	} else if(n == 2){
		
		return 1;
		
	} else if(n > 2){
		
		return (tribonacci(n-1,i) + tribonacci(n-2,i) + tribonacci(n-3,i));
		
	}
	
}

main(){
	
	int numero;
	
	int i=0;
	
	printf("Digite um numero \n");
	scanf("%i",&numero);
	
	int resultado;
	
	resultado=tribonacci(numero,&i);
	
	printf("o n-esimo termo e: %i\n",resultado);
	printf("Foi chamado %i vezes\n",i);
	
	system ("pause");
	return 0;
}
