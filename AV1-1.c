#include <stdio.h>
#include <stdlib.h>

//Construir arquivo

void opcao1(FILE *arq){
	
	int i,a,n;
	
	printf("Digite o numero de elementos\n");
	scanf("%i",&n);
	
	printf("Digite a amplitude\n");
	scanf("%i",&a);
	a=a-1;
	
	for(i=0;i<n;i++){
		
		fprintf(arq,"%i ",rand()%a);
		
	}
	
	fclose(arq);
}	
	
//media dos numeros

void opcao2(FILE *arq){
	
	int i=0,j=0;
	float media1=0,media2=0;
	
	
	while(fscanf(arq,"%i",&j)!=EOF){
		media1=media1+j;
		i++;
	}
	media2=media1/i;
	
	printf("A media dos numeros e %.1f\n",media2);
	fclose(arq);
}	

//moda dos numeros

void opcao3(FILE *arq){
	
	int i=0,j=0,modafinal=0,tamanho=0;
	
	tamanho=retorno(arq);
	
	int vetor[tamanho],moda[tamanho+1];
	
	for(j=0;j<tamanho+1;j++){
		moda[j]=0;	
	}
	rewind(arq);
	for(j=0;j<tamanho;j++){
		
		fscanf(arq,"%i",&vetor[j]);
		
		moda[vetor[j]]=moda[vetor[j]]+1;
	}
	for(j=0;j<tamanho+1;j++){
		
		if(moda[j]>moda[modafinal]){
			
			modafinal=j;	
			
		} 
		
	}
	
	printf("A moda dos numeros e %i\n",modafinal);
	fclose(arq);
}

//mediana dos numeros

void opcao4(FILE *arq){
	
	int i=0,j=0,numero=0,tamanho=0,aux=0;
	
	float mediana=0;
	
	tamanho=retorno(arq);
	
	int vetor[tamanho];
	rewind(arq);
	for(i=0;i<tamanho;i++){
		
		fscanf(arq,"%i",&vetor[i]);
		
	}
	
	
	for(i=0;i<tamanho;i++){
		j=i+1;
		for(;j<tamanho;j++){
			if(vetor[i]>vetor[j]){
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			
			}
		}
	}
	
	mediana=vetor[tamanho/2];
		
	printf("A mediana e %.1f\n",mediana);
	fclose(arq);
}

//função que retorna o tamanho do vetor

retorno(FILE *arq){
	rewind(arq);
	int tamanho=0,numero;
	
	while(fscanf(arq,"%i",&numero)!=EOF){
		tamanho++;
	}
	return tamanho;
}



main(){
	
	FILE *arq;
	
	int escolha=0;
	
	char nome[100];
	
	do{
		printf("Digite 1 para construir um vetor com n numeros inteiros\n");
		printf("Digite 2 para ler um arquivo e apresentar a media dos numeros\n");
		printf("Digite 3 para ler um arquivo e apresentar a moda dos numeros\n");
		printf("Digite 4 para ler um arquivo e apresentar a mediana dos numeros\n");
		printf("Digite 5 para sair\n");
		
		scanf("%i",&escolha);
		fflush(stdin);
		
		if(escolha==1){
			
			printf("Digite o nome do arquivo\n");
			
			gets(nome);
			
			arq=fopen(nome,"w");
			
			opcao1(arq);
			
		} else if(escolha==2){
			printf("Digite o nome do arquivo\n");
			
			gets(nome);
			
			arq=fopen(nome,"r");
			
			opcao2(arq);
			
		} else if(escolha==3){
			printf("Digite o nome do arquivo\n");
			
			gets(nome);
			
			arq=fopen(nome,"r");
			
			opcao3(arq);
			
		} else if(escolha==4){
			printf("Digite o nome do arquivo\n");
			
			gets(nome);
			
			arq=fopen(nome,"r");
			
			opcao4(arq);
			
		} else if(escolha!=5){
			
			printf("Escolha errada\n");	
			
		}
		
		
		printf("\n");
	}while(escolha!=5);
	

	
}
