#include <stdio.h>

int main() {
    int prioridade, continuar;
    int baixa = 0, media = 0, alta = 0;
    
    do{
        printf("Informe o Nível de Prioridade [1/2/3]: ");
        scanf("%d", &prioridade);
        
        if(prioridade == 1){
            baixa++;
        }
        else if(prioridade == 2){
            media++;
        }
        else if(prioridade == 3){
            alta++;
        }
        else{
            printf("Prioridade Inválida!");
        }
        printf("Deseja Continuar? [1/0]: ");
        scanf("%d", &continuar);
    }   while(continuar != 0);
    
    printf("\nBaixa: %d", baixa);
    printf("\nMédia: %d", media);
    printf("\nAlta: %d", alta);
    
  
    return 0;
}
