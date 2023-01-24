#include <stdio.h>
#include <stdlib.h>

int collatz(int nni,int i){
	
	if(nni == 1){
		
		return i;
		
	} else if(nni % 2 == 0){
		i++;
		nni=nni/2;
		printf("%i\n",nni);
		return collatz(nni,i);
		
		
	} else {
		i++;
		nni=(3 * nni) + 1;
		printf("%i\n",nni);
		return collatz(nni,i);
		
	}
	
	
}

main(){
	int nni,i=0,vezes;
	printf("Digite o nni \n");
	scanf("%i",&nni);
	vezes=collatz(nni,i);
	
	printf("%i vezes",vezes);
}
