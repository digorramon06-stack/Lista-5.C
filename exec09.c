#include <stdio.h>

int main() {
    int nota, continuar;
    int quantidade = 0, soma = 0;
    float media;
    
    printf("Avalie-nos agora!");
    do{
        printf("\nNos dê uma Nota de 1 a 5: ");
        scanf("%d", &nota);
        
        if(nota >= 1 && nota < 6){
            quantidade++;
            soma = soma + nota;
        }
        else{
            printf("Nota Inválida!");
        }
        
        printf("Você Deseja Continuar a Pesquisa? [1/0]: ");
        scanf("%d", &continuar);
        
    } while (continuar != 0);
    
    
    if(quantidade > 0){
        media = (float) soma / quantidade;
        printf("Média: %.2f", media);
    }
    else{
        printf("Nenhuma Nota Válida Registrada.");
    }

    return 0;
}
