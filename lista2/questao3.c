#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float valor, venda;

    printf("Digite o valor de compra do produto:\n");
    scanf("%f", &valor);

    if (valor < 20.00) {
        venda = (valor * 0.45) + valor;
            printf("O valor final do produto será: R$ %.2f", venda);
    } else {
        venda = (valor * 0.30) + valor;
            printf("O valor final do produto será: R$ %.2f", venda);
    }

    return 0;
}