
#include <stdio.h>

struct lista
{
 int valor;
 struct lista *proximo;
};

//fun��o recebe dois argumentos e retorna o endere�o de mem�ria de uma 'struct lista'
struct lista *procurarValor(struct lista *pLista, int valorProcurar)
{
 while(pLista != (struct lista *)0) //enquanto n�o chegar no final da lista/apontar para o espa�o zero, este ciclo continua sendo executado
 {
  if(pLista->valor == valorProcurar)
  {
   return (pLista);
  } 
  else{
   pLista = pLista->proximo;
  }
 }
  return (struct lista *)0;
}

int main()
{
 struct lista *procurarValor(struct lista *pLista, int valorProcurar);
 struct lista m1, m2, m3;
 struct lista *resultado, *gancho = &m1;
 int valorProcurar;
 
 m1.valor = 5;
 m2.valor = 10;
 m3.valor = 15;
 
 m1.proximo = &m2;
 m2.proximo = &m3;
 m3.proximo = 0;
 
 printf("Digite valor da pesquisa: ");
 scanf("%i", &valorProcurar);
 
 resultado = procurarValor(gancho, valorProcurar);
 
 if(resultado == (struct lista *)0)
 {
  printf("Valor n�o encontrado!\n");
 }
 else{
  printf("Valor %i encontrado.\n", resultado->valor);
 }

 return 0;
}
