#include <stdio.h>
 
int main() {
    int op = -1;
    int deposito;
    int saque;
    int senha;
    float saldo = 0;

    printf("Digite a sua senha: \n");
    scanf("%d", &senha);

    while(op != 0) {
        if(senha == 1234) {
            printf("Bem-vindo ao Banco! \n");
            printf("[1] - Depositar \n");
            printf("[2] - Sacar \n");
            printf("[3] - Verificar saldo \n");
            printf("[0] - Sair \n");
            printf("Escolha a opcao: \n");
            scanf("%d", &op);

            if(op == 1) {
                printf("Digite um valor para o deposito! \n");
                scanf("%d", &deposito);

                if(deposito > 0) {
                    saldo += deposito;
                } else {
                    printf("Valor invalido! \n");
                }
                
            }

            if(op == 2) {
                printf("Digite o valor para o saque! \n");
                scanf("%d", &saque);

                if(saque <= saldo && saque > 0) {
                    saldo -= saque;
                } else {
                    printf("Saldo insuficiente! \n");
                }
            }

            if(op == 3) {
                printf("Seu saldo: %.2f \n", saldo);
            }

            if(op == 0) {
                printf("Saindo do programa! \n");
                break;
            }
        } else {
            printf("Senha errada! \n");
            break;
        }
    }

    return 0;
}