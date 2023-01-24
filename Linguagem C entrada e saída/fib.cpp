#include <stdio.h>

fib(int n){
	
	if(n == 1){
		
		return 0;
		
	} else if(n<=3){
		
		return 1;
		
	} else {
		
		return (fib(n-1) + fib(n-2));
		
		
	}
	
	
}



main(){
	
	int n,resultado;
	
	scanf("%i",&n);
	
	resultado=fib(n);
	
	printf("resultado: %i\n",resultado);
}
