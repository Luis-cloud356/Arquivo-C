#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto carrinho[3];
    float soma = 0;
    
    for(int i=0;i<3;i++){
        printf("Digite o nome do produto:\n");
        scanf("%s", carrinho[i].nome);
        
        printf("Digite o preço do produto:\n");
        scanf("%f", &carrinho[i].preco);
        
        soma += carrinho[i].preco;
    }
    
    printf("\n Dados dos Produtos:\n");
    for(int i=0;i<3;i++){
        printf("Produto: %s, Preço:%.2f\n", carrinho[i].nome, carrinho[i].preco);
    }
    printf("Valor Total da compra: %.2f\n", soma);
    return 0;
}