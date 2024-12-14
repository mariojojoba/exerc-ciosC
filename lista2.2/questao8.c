#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int i;
    float valor_total, valor_desconto, valor, valoratual;

    i = 1;
    valor_total = valor_desconto = 0;
    while(i <= 20) {

        for(i=1; i <= 10; i++) {
            printf("Digite o valor do produto:\n");
                scanf("%f", &valor);
                    valor_total = valor + valor_total;
            if (valor <= 500) {
                valor_desconto = valor - (valor * 0.10);
                    valoratual = valor - (valor * 0.10);
                        printf("\nVocê recebeu 10%% de desconto e irá pagar:\nR$ %.2f\n\n", valoratual);
                        valor = 0;
            } else {
                valor_desconto = valor - (valor * 0.25);
                 valoratual = valor - (valor * 0.25);
                    printf("\nVocê recebeu 25%% de desconto e irá pagar:\nR$ %.2f\n\n", valoratual);
                        valor = 0;
            }
        }

        for(i=11; i <= 20; i++) {
            printf("Digite o valor do produto:\n");
                scanf("%f", &valor);
                    valor_total = valor + valor_total;
            if (valor <= 600) {
                valor_desconto = valor - (valor * 0.05);
                    valoratual = valor - (valor * 0.05);
                        printf("\nVocê recebeu 5%% de desconto e irá pagar:\nR$ %.2f\n\n", valoratual);
                            valor = 0;
            } else {
                valor_desconto = valor - (valor * 0.15);
                    valoratual = valor - (valor * 0.15);
                        printf("\nVocê recebeu 15%% de desconto e irá pagar:\nR$ %.2f\n\n", valoratual);
                            valor = 0;
            }

        }

    }

    printf("Valor total sem desconto: %.2f\nValor total com desconto: %.2f\n", valor_total, valor_desconto);

    return 0;
}
