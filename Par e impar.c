#include <stdio.h>

int main() {
    int numeros[8], par = 0, impar = 0;
    int i;
    
    printf("Digite 8 números:\n");
    for(i=0;i<8;i++){
        scanf("%d", &numeros[i]);
    if(numeros[i]%2==0){
        par++;
    }
    else {
        impar++;
    }
    }
    printf("O número é par: %d\n",par);
    printf("O número é impar: %d\n",impar);
    return 0;
    
    
}