#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    char marca[30], modelo[20], cor[30];
    int ano, id;
    float valor;
    int  combustivel;
    
} Carro;

Carro carros [20];

int numCarro = 0;

void cadastrarVeículo();
void listarVeículos();
void filtrarCombustível();
void buscarVeículo();

int main(){
    int opcao;
    
    do {
      printf("---- Loja de Carros ----\n");
      printf("1 - Cadastrar Veículo\n");
      printf("2 - Listar Veículo\n");
      printf("3 - Filtrar Combustível\n");
      printf("4 - Buscar Veículo\n");
      printf("0 - Sair\n");
      printf("Selecione uma opção :\n");
      
      scanf("%d", &opcao);
      system("clear");
      
      switch(opcao){
          case 1:
          cadastrarVeículo();
          break;
          case 2:
          listarVeículos();
          break;
          case 3:
          filtrarCombustível();
          break;
          case 4:
          buscarVeículo();
          break;
          case 0:
          printf("Obrigado !\n");
          break;
          default:
          printf("Opção Invalida !\n");
      }
      
      printf("Enter para continuar ...\n");
      getchar();
      getchar();
      system("clear");
    }while(opcao != 0);
    
    return 0;
}

void cadastrarVeículo (){
    printf("---- Cadastro de Veículos ----\n");
    printf("Id :\n");
    scanf("%d",&carros[numCarro].id);
    printf("Marca :\n");
    scanf("%s",carros[numCarro].marca);
    printf("Modelo :\n");
    scanf("%s",carros[numCarro].modelo);
    printf("Cor :\n");
    scanf("%s",carros[numCarro].cor);
    printf("Ano :\n");
    scanf("%d",&carros[numCarro].ano);
    printf("Valor :\n");
    scanf("%f",&carros[numCarro].valor);
    printf("Combustivel :\n");
    printf("1 - Etanol\n");
    printf("2 - Gasolina\n");
    printf("3 - Flex\n");
    printf("4 - Elétrico\n");
    scanf("%d",&carros[numCarro].combustivel);
    
    
    
}