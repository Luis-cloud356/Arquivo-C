#include <stdio.h>

int main() {
    int numeros[6], soma = 0;
    int i;
    
    printf("Digite 6 números: \n");
    for (i = 0; i < 6;i++){
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    
    printf("Soma dos números: %d\n",soma);
    return 0;
}