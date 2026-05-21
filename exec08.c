#include <stdio.h>

int main() {
    float orcamento, produto, total = 0;
    int qtdprodutos = 0;
    
    printf("Informe o Valor do Orçamento: ");
    scanf("%f", &orcamento);
    
    while(total <= orcamento){
        printf("\n(OBS: DIGITE 0 PARA ENCERRAR A COMPRA.)");
        printf("\nInforme o Valor do Produto: ");
        scanf("%f", &produto);
        
        if((total + produto) > orcamento){
            printf("Orçamento Ultrapassado!\n");
        }
        else{
           if (produto > 0){
            total = total + produto;
            qtdprodutos++;
            }
           else if(produto == 0){
               break;
           }
           else{
            printf("Valor Inválido!\n");
            }
        }
    }
    printf("\nTotal da Compra: %.2f", total);
    printf("\nProdutos Válidos: %d", qtdprodutos);
    
    return 0;
}
