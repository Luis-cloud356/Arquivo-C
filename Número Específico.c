#include <stdio.h>

int main() {
    int numeros[10], busca, encontrado = 0, i;
    
    printf("Digite 10 números: \n");
    for(i=0;i<10;i++){
        scanf("%d", &numeros[i]);
    }
    
    printf("Digite um número para buscar: \n");
    scanf("%d", &busca);
    
    for(i=0;i<10;i++){
        if(numeros[i] == busca){
            printf("Número encontrado na posição %d (indice %d)\n", i + 1, i);
            encontrado = 1;
            break;
        }
    }
    
    if(!encontrado){
        printf("Numero não encontrado");
    }
    return 0;
}