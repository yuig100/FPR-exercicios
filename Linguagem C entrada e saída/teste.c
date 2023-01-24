#include <stdio.h>

typedef struct lista{
	
	int datai[3];
	
	int dataf[3];
	
	int datam[3];
	
}Slist;

main(){
		
	int i;
	
	int aux[3];
	
	Slist data;
	
	scanf("%i %i %i",&data.datai[0],&data.datai[1],&data.datai[2]);
	
	scanf("%i %i %i",&data.dataf[0],&data.dataf[1],&data.dataf[2]);
	
	
	aux[0]+=data.datai[0];
	aux[0]+=data.datai[1]*30;
	aux[0]+=data.datai[2]*360;	
	
	aux[1]+=data.dataf[0];
	aux[1]+=data.dataf[1]*30;
	aux[1]+=data.dataf[2]*360;
	
	aux[2]=aux[1]-aux[0];
	data.datam[2]=aux[2]/360;
	aux[2]=aux[2]%360;
	data.datam[1]=aux[2]/30;
	aux[2]=aux[2]%30;
	data.datam[0]=aux[2];
	
	printf("Quantia de dias: %d\nQuantia de meses: %d\nQuantia de anos: %d\n",data.datam[0],data.datam[1],data.datam[2]);
	
}
