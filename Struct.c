#include <stdio.h>

struct Pessoa{ //Estrutura ou Grupo de variaveis
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1 = {"Ana", 25, 1.68};
    
    printf("Nome:%s\n",pessoa1.nome);
    printf("Idade:%d\n",pessoa1.idade);
    printf("Altura:%.2f",pessoa1.altura);
    
    return 0;
}