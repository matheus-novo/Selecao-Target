#include <stdio.h>

int main(void) {
  char palavra[11] = "Programador";
  char inverso[11];

  for (int i = 0; i < 11; i++){
    inverso[i] = palavra[10 - i];
  }

  for (int i = 0; i < 11; i++){
    printf("%c", inverso[i]);
  }
  
  
  return 0;
}