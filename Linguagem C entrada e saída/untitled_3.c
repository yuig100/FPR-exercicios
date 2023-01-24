#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
	int matricula;
	struct Aluno *proximo;
} listaAluno;

listaAluno *criaLista();
void Menu(listaAluno *lista, int value);
void inserirInicio(listaAluno *lista, int id);
int removeInicio(listaAluno *lista);
void Exibir(listaAluno *lista);

int main(){
    int opcao;
	listaAluno *newLista;
	newLista = criaLista();
  	do {
        printf("Escolha a opcao \n");
        printf("1. Adicionar Aluno \n");
        printf("2. Exibir lista de Alunos \n");
        printf("3. Buscar pela matricula \n");
        scanf("%d", &opcao);
        Menu(newLista, opcao);
  	} while(opcao != 0);
  	return 0;
};

void Menu(listaAluno *lista, int value) {
  int IdMatricula;
  switch(value) {
    case 1:
        printf("Matricula Aluno: \n");
        scanf("%d", &IdMatricula);
        inserirInicio(lista, IdMatricula);
    break;
    
    case 2:
        printf("Exibindo... \n");
        Exibir(lista);
    break;  

    default:
    printf("Comando invalido\n\n");
  }
};

// Cria o primeiro no vazio, apontando para null;
listaAluno *criaLista() {
	listaAluno *novo = (listaAluno*) malloc(sizeof(listaAluno));
	if (novo == NULL) {
		exit(0);
	}
	novo->proximo = NULL;
	return novo;
};

void inserirInicio(listaAluno *lista, int id) {
	listaAluno *novo = (listaAluno*) malloc(sizeof(listaAluno));
	if (novo == NULL) {
		exit(0);
	};
	novo->matricula = id;
	novo->proximo = lista->proximo; // Novo aponta pra null;
	lista->proximo = novo; // inicial aponta para o novo;
}

int removeInicio(listaAluno *lista) {
	int matricula;
	listaAluno *auxiliar;
	auxiliar = lista->proximo;
	matricula = lista->matricula;
	lista->proximo = auxiliar->proximo;
	free(auxiliar);
	return matricula;
}

void Exibir(listaAluno *lista) {
    listaAluno *auxiliar;
    auxiliar = lista->proximo;
    while(auxiliar != NULL){
        printf(" Matricula => %d \n", auxiliar->matricula);
        auxiliar = auxiliar->proximo;
    }
    printf("\n\n");
    //   if (lista != NULL) {
    //     printf ("Matricula: %d\n", lista->matricula);
    //     Exibir(lista->proximo);
    //   }
}

