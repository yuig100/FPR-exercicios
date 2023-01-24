#include <stdio.h>

fat(int n){
	
	if(n<=1){
		
		return 1;
		
	} else {
		
		return (n * fat(n-1));
		
	}
	
	
}



main(){
	
	int n,resultado;
	
	scanf("%i",&n);
	
	resultado=fat(n);
	
	printf("resultado: %i\n",resultado);
}
