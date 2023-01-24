#include <stdio.h>

struct lista{
	
	int valor;
	
	struct lista *proximo;
		
};

struct lista *procurarvalor(struct lista *plista,int valor){
	
	while(plista !=0){
		
		if (plista -> valor == valor){
			
			return(plista);
			
		} else {
			
			plista = plista -> proximo;
			
		}
	}
	
	return (0);		
}



main(){
	
	 
    struct lista *procurarvalor(struct lista *plista,int procurarvalor)
	struct lista m1, m2, m3;
	struct lista *resultado,*gancho = &m1;
	
	int valor;
	
	m1.valor = 5;
	m2.valor = 10;
	m3.valor = 15;
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = 0;
	
	printf("Digite valor da pesquisa: ");
	scanf("%i",&valor);
	
	resultado = procurarvalor(gancho,valor);
	
	if(resultado =0){
		
		printf("Valor nao encontrado \n");
		
	}else{
		
		printf("Valor encontrado \n");
		
	}
	
	
	getchar();
	return 0;
}
