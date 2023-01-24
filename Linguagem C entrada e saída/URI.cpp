#include <stdio.h>
 
int main() {
 
    char nome[12];
	double salario,totalvendas;
	
	gets(nome);
	
	fflush(stdin);
	
	scanf("%lf",&salario);
	
	scanf("%lf",&totalvendas);
	
	
	salario = salario + (totalvendas * 0.15);
	
	
	
	
	
	
	
	
	
	
	printf("%s \n", nome);
	
	printf("%.2lf \n", salario);
	
	printf("%.2lf \n", totalvendas);
	
	printf("\n");
	 
    return 0;
}
