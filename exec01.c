#include <stdio.h>

int main() {

int i, codigo;
int validos = 0, invalidos = 0;
    
    for(i = 1; i <+ 11; i++){
        printf("Digite o código: ");
        scanf("%d", &codigo);
        
         if(codigo >= 1000 && codigo <= 9999){
            validos++;
        }
         else{
        invalidos++;
         }
    }
   
    
    printf("Código validos: %d", validos);
    printf("\nCódigos invalidos: %d", invalidos);
    

    return 0;
}
