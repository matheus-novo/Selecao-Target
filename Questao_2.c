#include <stdio.h>

int main(void) {
  int numero;

  printf("Digite um numero\n");
  scanf("%d", &numero);

  if (numero == 0){
    printf("Esta na sequencia");
    return 0;
  }

  int atual;
  int somados[2] = {0, 1};
  
  while (atual <= numero){
    
    atual = somados[0] + somados[1];
    
    if(atual == numero){
      printf("Esta na sequencia");
      return 0;
    }
    
    somados[0] = somados[1];
    somados[1] = atual;
  }

  printf("Nao esta na sequencia");
  
  return 0;
}