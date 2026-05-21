#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000.0, deposito;
    
    do {
        printf("\nMenu: ");
        printf("\n1 - Consultar Saldo.");
        printf("\n2 - Depositar.");
        printf("\n0- Sair\n");
        
        scanf("%d", &opcao);
        
         if(opcao == 1){
            printf("Seu saldo é de R$%.3f!\n", saldo);
        }
        else if(opcao == 2) {
            printf("Digite o valor do depósito: R$");
            scanf("\n%f", &deposito);
            saldo = saldo + deposito;
        }
        
        else if(opcao == 0){
            
        }
        else{
            printf("Opção Inválida!\n");
        }
   }
   
   while(opcao != 0);
    printf("\nPrograma Encerrado.");
    return 0;
}
