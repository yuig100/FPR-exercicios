/*  Crie um programa que possui uma fun��o que recebe como argumento um vetor de tamanho 5 de tipo estrutura sendo que essa estrutura deve armazenar um determinado hor�rio no formato hh:mm:ss, 
pe�a que o usu�rio digite 5 hor�rios diversos que dever�o ser armazendos no argumento recebido. Crie uma segunda fun��o que receber� este msmo vetor estrutura mas dessa vez a fun��o dever� 
apenas ler os valores armazendos no vetor estrtura mostrando uma mensagem apropriada.*/
#include<stdio.h>
#include<stdlib.h>

struct horario{
	
	int hora;
	int minuto;
	int segundo;
	
};


main(){
	
	void receberhorarios(struct horario lista[5]);
	
	void lerhorarios(struct horario lista[5]);	
	
	struct horario listaHorarios[5];
	
	receberhorarios(listaHorarios);
	
	lerhorarios(listaHorarios);	
	
	
	
	
	
	
	system("pause");
	return 0;
	
}


void receberhorarios(struct horario lista[5]){
	
	int i;
	
	for(i = 0;i < 5 ; i++){
		
		printf("Digite o %i horario (hh:mm:ss))",i+1);
		scanf("%i %i %i",&lista[i].hora,&lista[i].minuto,&lista[i].segundo);
		
	}
	
}


void lerhorarios(struct horario lista[5]){
	
	int i;
	
	for(i = 0;i < 5 ; i++){
		
		printf("O %i horario e %i:%i:%i \n",i+1,lista[i].hora,lista[i].minuto,lista[i].segundo);
		
	}
	
}

