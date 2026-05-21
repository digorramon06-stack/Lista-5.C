#include <stdio.h>

int main() {
   int codigo;
   
   printf("Digite o Código de Acesso: ");
   scanf("%d", &codigo);

    while(codigo != 4321){
       printf("Código Incorreto!");
       printf("\nDigite o Código de Acesso: ");
       scanf("%d", &codigo);
    }
   printf("Acesso Liberado.");
    
    return 0;
}
