#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "Portuguese");

    int num;
    float valor;

    printf("Digite o valor do produto:");
    scanf("%f", &valor);

    printf("Digite a opção desejada:\n1 - Á vista em dinheiro.\n2 - Cartão de crédito em 1x.\n 3 - Cartão de crédito em 2x (no cartão da loja)\n4 - Cartão de crédito em 2x (ser ser cartão da loja).\nInisira:\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        valor = valor - (valor * 0.10);
        printf("O valor final do produto será R$ %.2f.", valor);
        break;
    
    case 2:
        valor = valor - (valor * 0.15);
        printf("O valor final do produto será R$ %.2f.", valor);
        break;

    case 3:
        valor = valor;
        printf("O valor final do produto será R$ %.2f.", valor);
        break;

    case 4:
        valor = valor * 1.10;
        printf("O valor final do produto será R$ %.2f.", valor);
        break;
    
    default:
        printf("A opção digitada não é válida.");
        break;
    }

    
    return 0;
}