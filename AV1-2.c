#include <stdio.h>

pot(int k,int n){
	
	if(n<1){
		
		return 1;
		
	} else {
		
		return (k * pot(k,n-1));
		
	}
	
}

main(){
	
	int k=0,n=0,resultado=0;
	
	printf("Digite o k\n");
	scanf("%i",&k);
	printf("Digite o n\n");
	scanf("%i",&n);
	
	resultado=pot(k,n);
	
	printf("O resultado e %i\n",resultado);
}
