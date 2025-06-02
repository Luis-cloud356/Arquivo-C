#include<stdio.h>
#include<locale.h>

    typedef struct{
        char nome[30], endereco[50], CPF[60], RG[40], telefone[30];
        float valor;
    } Reserva;
    
    Reserva reservas[40];
    
    int numReserva = 0;
    
    void fazerCheckin();
    void serviçoQuarto();
    void fazerPedido();

int main(){
    setlocale(LC_ALL,"");
    int opcao;
    
    do{
      printf("Olá,seja Bem Vindo ao Hotel Radiante\n ");
    printf("Dígite a opção:\n");
    printf("1 - Fazer checkin\n");
    printf("2 - Solicitar serviço de quarto\n");
    printf("3 - Fazer pedido\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);
    
      switch(opcao){
   
        case 1:
        fazerCheckin();
        break;
        case 2:
        serviçoQuarto();
        break;
        case 3:
        fazerPedido();
        break;
        case 0:
        printf("Obrigado !\n");
        break;
        default:
        printf("Opção Invalida !\n");
        

     }
     
     printf("Enter para Continuar ...\n");
     getchar();
     getchar();
     
    }while(opcao !=0);
    
    return 0;
}
  
  void fazerCheckin(){
      printf("Nome Completo\n");
      scanf(" %[^\n]", reservas[numReserva].nome);
      printf("Endereço\n");
      scanf(" %[^\n]", reservas[numReserva].endereco);
      printf("Digite seu CPF\n");
      scanf(" %[^\n]", reservas[numReserva].CPF);
      printf("Digite seu RG\n");
      scanf(" %[^\n]", reservas[numReserva].RG);
      printf("Digite seu Telefone\n");
      scanf(" %[^\n]", reservas[numReserva].telefone);
      numReserva++;
      
  } 
  
  void serviçoQuarto(){
      
      int opcao;
      
        printf("Dígite qual é seu pedido\n");
        printf("1 - Camareira\n");
        printf("2 - Serviço de alimentação\n");
        printf("3 - Limpeza\n");
        printf("4 - Agendamento de passeios e atividades\n");
        printf("5 - Serviço de lavanderia\n");
        printf("6 - Reposição de toalhas");
        printf("7 - Produtos de higiene\n");
        printf("8 - Manutenção\n");
        scanf("%d", &opcao);
            switch(opcao)
            {
                case 1:
                printf("A camareira chegara em 5 minutos\n");
                break;
                case 2:
                printf("Seu serviço de alimentação chegara em 30 minutos\n");
                break;
                case 3:
                printf("Sua limpeza chegara em 5 minutos\n");
                break;
                case 4:
                printf("Seu agendamento de passeios e atividades será marcado\n");
                break;
                case 5:
                printf("Seu serviço de lavandeiria chegara em 8 minutos\n");
                break;
                case 6:
                printf("Sua reposição de toalhas chegara em 5 minutos\n");
                break;
                case 7:
                printf("Seus produtos de higiene chegara em 5 minutos\n");
                break;
                printf("Sua manutenção chegara em 8 minutos\n");
                break;
                default:
                
            }
            
  }
  
  void fazerPedido(){
      int opcao;
      int qtd =0;
      
       printf("Informe seu pedido\n");
        printf("1 - Lanche\n");
        printf("2 - Refrigerante\n");
        printf("3 - Suco\n");
        printf("4 - Brinquedos\n");
        scanf("%d", &opcao);
        
            switch(opcao)
            {
                case 1:
                printf("Informe a quantidade\n");
                scanf("%d", &qtd);
                printf("Seu lanche será entregue em 35 minutos\n");
                reservas[numReserva].valor = 30*qtd;
                printf("Seu lanche ficou: R$ %.2f\n", reservas[numReserva].valor);
                break;
                case 2:
                printf("Informe a quantidade\n");
                scanf("%d", &qtd);
                printf("Seu refrigerante será entregue em 5 minutos\n");
                reservas[numReserva].valor = 10*qtd;
                printf("Seu refrigerante ficou:%.2f\n", reservas[numReserva].valor);
                break;
                case 3:
                printf("Informe a quantidade\n");
                scanf("%d", &qtd);
                printf("Seu suco será entregue em 5 minutos\n");
                reservas[numReserva].valor = 5*qtd;
                printf("Seu suco ficou:%.2f\n", reservas[numReserva].valor);
                break;
                case 4:
                printf("Informe a quantidade\n");
                scanf("%d", &qtd);
                printf("Seu brinquedo será entregue em 5 minutos\n");
                reservas[numReserva].valor = 50*qtd;
                printf("Seu brinquedo ficou:%.2f\n", reservas[numReserva].valor);
                break;
                default:
                
                
            }
       
  }