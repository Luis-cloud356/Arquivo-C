#include <stdio.h>

int main() {
    int notas[6], media = 0;
    int i;
    
    printf("Digite 6 notas:\n");
    for(i=0;i<6;i++){
        scanf("%d", &notas[i]);
    }
    media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4] + notas[5])/6;
    printf("Média é :%d\n", media);
    printf("As notas maiores são:");
    for(i=0;notas[i]>=media;i++){
        printf("%d, ", notas[i]);
    }
    return 0;
}