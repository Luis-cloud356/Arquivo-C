#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno turma[2];
    
    for(int i = 0;i < 2;i++){
        printf("Digite o nome do aluno %d",i + 1);
        scanf(" %[^\n]",turma[i].nome);
        
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &turma[i].nota);
    }
    
    printf("\n Dados dos Alunos:\n");
    for(int i = 0;i < 2;i++){
        printf("Aluno: %s, Nota:%.2f\n", turma[i].nome, turma[i].nota);
    }
    
    return 0;
}