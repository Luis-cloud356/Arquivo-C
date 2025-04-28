#include <stdio.h>

int main() {
    int numeros[5];
    int i;
    
    printf("Digite 5 números:\n");
    for(i=0;i<5;i++){
        scanf("%d", &numeros[i]);
    }
    for(i=4;i>0;i--){
        printf("Os numeros %d, ", numeros[i]);
    
    }
    return 0;
}