#include <stdio.h>

int main() {

float meta, valorMes, total = 0;
int mesesValidos = 0;

printf("Digite a meta de economia: ");
scanf("%f", &meta);

while(total < meta){
    
    printf("Digite o Valor do Mês: ");
    scanf("%f", &valorMes);
    
    if(valorMes > 0){
        total = total + valorMes;
        mesesValidos++;
    }
    else{
        printf("\nValor Desconsiderado!");
    }
}

printf("Total economizado %.2f", total);
printf("\nMêses Validos: %d", mesesValidos);

    return 0;
}
