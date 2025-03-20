/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");
    int opção, opção2, opção3, opção4;
    char opçãoNome[30], opçãoCPF[11], opçãoRG[10], opçãoEndereço[20], opçãoTelefone[14];
    
    
    printf("Dígite ''Olá,seja Bem Vindo ao Hotel Radiante''\n ");
    printf("Dígite a opção:\n");
    printf("1 - Fazer checkin\n");
    printf("2 - Solicitar serviço de quarto\n");
    printf("3 - Fazer pedido\n");
    scanf("%d", &opção);
    
    switch(opção){
    case 1:
        printf("Dígite nas opções\n");
        printf("Dígite o nome completo\n");
        scanf("%s", opçãoNome);
        printf("Dígite o seu CPF\n");
        scanf("%s", opçãoCPF);
        printf("Dígite seu RG\n");
        scanf("%s", opçãoRG);
        printf("Dígite o seu endereço\n");
        scanf("%s", opçãoEndereço);
        printf("Dígite seu telefone para contato\n");
        scanf("%s", opçãoTelefone);
        printf("Dígite sua forma de pagamento\n");
        printf("1 - Pix\n");
        printf("2 - Cartão\n");
        printf("3 - Dinheiro\n");
        scanf("%d", &opção2);
            switch (opção2){
                case 1:
                printf("Leia o codigo qr code\n");
                break;
                case 2:
                printf("Insira ou aproxime o Cartão\n");
                break;
                case 3:
                printf("Entregue seu dinheiro para o recepcionista\n");
                printf("A comida está inclusa\n");
                break;
                default:
                return 1;
            }
        break;
        
    case 2:
        printf("Dígite qual é seu pedido\n");
        printf("1 - Camareira\n");
        printf("2 - Serviço de alimentação\n");
        printf("3 - Limpeza\n");
        printf("4 - Agendamento de passeios e atividades\n");
        printf("5 - Serviço de lavanderia\n");
        printf("6 - Reposição de toalhas");
        printf("7 - Produtos de higiene\n");
        printf("8 - Manutenção\n");
        scanf("%d", &opção3);
            switch(opção3)
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
                return 1;
            }
            break;
        case 3:
        printf("Informe seu pedido\n");
        printf("1 - Lanche\n");
        printf("2 - Refrigerante\n");
        printf("3 - Suco\n");
        printf("4 - Brinquedos\n");
        scanf("%d", &opção4);
            switch(opção4)
            {
                case 1:
                printf("Seu lanche será entregue em 35 minutos\n");
                break;
                case 2:
                printf("Seu refrigerante será entregue em 5 minutos\n");
                break;
                case 3:
                printf("Seu suco será entregue em 5 minutos\n");
                break;
                case 4:
                printf("Seu brinquedo será entregue em 5 minutos\n");
                break;
                default:
                return 1;
                
            }
        break;
        default:
        return 1;
        
        
    }

    return 0;
}



