#include <stdio.h>

int main() {
  int c;
  float temperatura;
  int seguras = 0, risco = 0;

  for(c = 1; c <= 8; c += 1 ){
      printf("Informe a Temperatura da Máquina: ");
      scanf("%f", &temperatura);
      
      if(temperatura <= 75){
          seguras++;
      }
      else{
          risco++;
      }
  }

  printf("\nLeituras Seguras: %d", seguras);
  printf("\nLeituras de Risco: %d", risco);
    return 0;
}
