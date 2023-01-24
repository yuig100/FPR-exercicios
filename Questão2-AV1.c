#include <stdio.h>
#include <stdlib.h>

potencia(int k,int n){
	
	if(n == 1){
		
	return k;
		
	} else {
		
	return (k * potencia(k,n-1));
		
	}
	
}


main(){
	
	int n,k,resultado;
	
	printf("Digite K \n");
	scanf("%i",&k);
	printf("Digite N \n");
	scanf("%i",&n);
	
	
	resultado=potencia(k,n);
	
	printf("O resultado e: %i",resultado);
	
}
