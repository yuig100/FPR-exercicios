#include <stdio.h>
#include <stdlib.h>

main(){
	
	int i = 5;
	int a = 10;
	struct lista{
		
		int valor;
		
		struct lista *proximo;
	
	}m[i];
	
	struct lista *gancho = &m[0];
	
	int j;
	
	for(j=0;j<=i;j++){
		if(j < i){
			
			m[j].valor =  rand() % (a-1);
		
		m[j].proximo = &m[j+1];
			
		}
		
		else
		{
		
		  m[i-1].proximo = 0;
		
		}
	}
	
	while(gancho != 0){
		
		printf("%i \n",gancho ->valor);
		gancho = gancho ->proximo;
		
	}
	
	getchar();
	return 0;
	
}
