#include <stdio.h>

int main() {
    int c, status;
    int concluidas = 0, pendentes = 0;

    for(c = 1; c <= 8; c+=1){
        printf("Digite o Status da Atividade %d [1/0]: ", c);
        scanf("%i", &status);
        if(status == 1){
            concluidas++;
        }
        else{
            pendentes++;
        }
    }
    
    
    printf("Concluidas: %d", concluidas);
    printf("\nPendentes: %d", pendentes);
    
    return 0;
}
