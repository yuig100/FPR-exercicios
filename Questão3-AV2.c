#include <stdio.h>
#include <stdlib.h>

main(){
	
	int tamanho_mochila,quantidade_itens;
	printf("Digite o tamanho da mochila\n");
	scanf("%i",&tamanho_mochila);
	
	printf("Digite a quantidade de itens\n");
	scanf("%i",&quantidade_itens);
	
	int i,quantidade[quantidade_itens];
	double V_P[quantidade_itens],peso[quantidade_itens],valor[quantidade_itens];
	
	for(i=0;i<quantidade_itens;i++){
		
		printf("Digite o Peso do %i item\n",i+1);
		scanf("%lf",&peso[i]);
		
		printf("Digite o Valor do %i item\n",i+1);
		scanf("%lf",&valor[i]);
		
		printf("Digite a quantidade do %i item\n",i+1);
		scanf("%i",&quantidade[i]);
	}
	
	int posicao[quantidade_itens];
	
	for(i=0;i<quantidade_itens;i++){
		
		V_P[i]=valor[i]/peso[i];
		printf("Quantidade: %i Peso: %.3lf Valor: %.2lf P/V: %.3lf \n \n",quantidade[i],peso[i],valor[i],V_P[i]);
		posicao[i]=i+1;
	}
	
	int j;
	double aux;
	for(i=0;i<quantidade_itens;i++){
		for(j=i+1;j<quantidade_itens;j++){
			
			if(V_P[i]<V_P[j]){
				
				aux=V_P[i];
				V_P[i]=V_P[j];
				V_P[j]=aux;
				
				aux=quantidade[i];
				quantidade[i]=quantidade[j];
				quantidade[j]=aux;
				
				aux=peso[i];
				peso[i]=peso[j];
				peso[j]=aux;
				
				aux=valor[i];
				valor[i]=valor[j];
				valor[j]=aux;
				
				aux=posicao[i];
				posicao[i]=posicao[j];
				posicao[j]=aux;
				
			} 
		}
	}
	
	for(i=0;i<quantidade_itens;i++){
		
		V_P[i]=valor[i]/peso[i];
		printf("Quantidade: %i Peso: %.3lf Valor: %.2lf P/V: %.3lf posecao: %i\n",quantidade[i],peso[i],valor[i],V_P[i],posicao[i]);
		
	}
	i=0,j=0;
	while(tamanho_mochila>=1 && i < quantidade_itens){
		
		if(tamanho_mochila>=1 && quantidade[i]>0 && tamanho_mochila >= peso[i]){
			
			tamanho_mochila=tamanho_mochila-peso[i];
			quantidade[i]=quantidade[i]-1;
			j++;
			
			if(quantidade[i] == 0 || tamanho_mochila <= peso[i]){
				
				printf("Precisou de %i unidades do item %i\n",j,posicao[i]);
				j=0;
			}
		} else {
			
			i++;
			
		}
		
	}
	
}
