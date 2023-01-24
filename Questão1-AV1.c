#include <stdio.h>
#include <stdlib.h>

void construir_vetor(){
	
	FILE *arq;
	char nome_arquivo[100];
	
	printf("Digite o nome do arquivo\n");
	gets(nome_arquivo);
		
	arq=fopen(nome_arquivo,"w");
		
	int amplitude,numeros,i;
		
	printf("Digite o numero de elementos\n");
	scanf("%i",&numeros);
	printf("Digite a amplitude\n");
	scanf("%i",&amplitude);
	
	int vetor[numeros];
	
	for(i=0;i<numeros;i++){
		
		vetor[i]=rand() % (amplitude-1);
		fprintf(arq,"%i ",vetor[i]);
	}
	
	fclose(arq);
}

void apresentar_media(){
	
	FILE *arq;
	
	char nome_arquivo[100];
	
	int i=0,n,numeros=0;
	
	float media=0;
	
	printf("Digite o nome do arquivo\n");
	gets(nome_arquivo);
	
	arq=fopen(nome_arquivo,"r");
	
	while(fscanf(arq,"%i",&n) != EOF){
		
		i++;
		
		numeros=numeros+n;
		
	}
	
	media=numeros/i;
	
	printf("A media dos numeros e: %.1f \n",media);
	
	fclose(arq);
}

void apresentar_moda(){
	
	FILE *arq;
	
	char nome_arquivo[100];
	
	int n,i=0,tamanho=0;
	
	printf("Digite o nome do arquivo\n");
	gets(nome_arquivo);
	
	arq=fopen(nome_arquivo,"r");
	
	while(fscanf(arq,"%i",&n) != EOF){
		
		tamanho++;
		
	}
	
	fclose(arq);
	
	int vetor[tamanho];
	
	arq=fopen(nome_arquivo,"r");
	
	i=0;
	while(fscanf(arq,"%i",&n) != EOF){
		
		vetor[i]=n;
		i++;
		
	}
	
}

void apresentar_mediana(){
	
	FILE *arq;
	
	char nome_arquivo[100];
	
	int n,i=0,tamanho=0;
	
	printf("Digite o nome do arquivo\n");
	gets(nome_arquivo);
	
	arq=fopen(nome_arquivo,"r");
	
	while(fscanf(arq,"%i",&n) != EOF){
		
		tamanho++;
		
	}
	
	fclose(arq);
	
	int vetor[tamanho];
	
	arq=fopen(nome_arquivo,"r");
	
	i=0;
	while(fscanf(arq,"%i",&n) != EOF){
		
		vetor[i]=n;
		i++;
		
	}	
	
	int j,aux;
	
	for(i=0;i<tamanho;i++){
		for(j=i+1;j<tamanho;j++){
			
			if(vetor[i] > vetor[j]){
				
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
				
			}	
		}
		
	}
	
	printf("A mediana de numeros e: %i \n",vetor[tamanho/2]);
	
	fclose(arq);
}

main(){
	
	int escolha;
	
	do{
		
	printf("Digite 1 para criar um arquivo com numeros aleatorios \n");
	printf("Digite 2 para ler um arquivo e apresentar a media\n");
	printf("Digite 3 para ler um arquivo e apresentar a moda\n");
	printf("Digite 4 para ler um arquivo e apresentar a mediana\n");
	printf("Digite 5 para sair \n");
	scanf("%i",&escolha);
	fflush(stdin);
	
	if(escolha == 1){
		
		construir_vetor();
		
	} else if(escolha == 2){
		
		apresentar_media();
		
	} else if(escolha == 3){
		
		apresentar_moda();
		
	}else if(escolha == 4){
		
		apresentar_mediana();
		
	}
		
		
	}while(escolha!=5);
	
	
}
