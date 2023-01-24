#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 5

/*
    Utilizando “struct”, fazer um programa em C que permita a entrada de nome, e-mail e telefone de 5 pessoas. Em seguida, apresente-os na
    tela indexadas em ordem alfabética pelo campo nome. 
*/

typedef struct Pessoa {
    char nome[100];
    char email[100];
    char telefone[20];
} listaPessoa;


listaPessoa lista[TAMANHO];

int main() {
    int i, k, j, l;

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite seu nome: \n");
        scanf("%s", &lista[i].nome);
        printf("Digite seu email: \n");
        scanf("%s", &lista[i].email);
        printf("Digite seu telefone: \n");
        scanf("%s", &lista[i].telefone);
    }
    
    listaPessoa maior;
    
    for (k = 0; k < TAMANHO; k++){
        for(j = k; j > 0; j-- ) {
            // Se o primeiro é o maior wz > az
            if (strcmp(lista[j].nome, lista[j-1].nome) > 0){
                maior = lista[j];
                lista[j] = lista[j-1];
                lista[j-1] = maior;              
            }
        }
    }
    
    for (l = TAMANHO; l >= 0; l--) {
        printf("ordenada => %s \n", &lista[l].nome);
    }

    return 0;
};

