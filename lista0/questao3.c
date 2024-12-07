#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float real, dolar;

    dolar = 6.09;

    printf("Digite o valor (em reais) a ser convertido em doláres:\n");
    scanf("%f", &real);

    dolar = (real / dolar) - 0.10;

    printf("Seu valor convertido em doláres é: R$ %.2f\n", dolar);

    return 0;
}