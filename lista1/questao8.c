#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int cent5, cent10, cent25, cent50, real1;
    float valor;

    printf("Insira a quantidade de moedas de 5 centavos");
    scanf("%d", &cent5);

    printf("Insira a quantidade de moedas de");
    scanf("%d", &cent10 );

    printf("Insira a quantidade de moedas de");
    scanf("%d", &cent25);

    printf("Insira a quantidade de moedas de");
    scanf("%d", &cent50);

    printf("Insira a quantidade de moedas de");
    scanf("%d", &real1);

    valor = (cent5 * 0.05) + (cent10 * 0.10) + (cent25 * 0.25) + (cent50 * 0.50) + (real1 * 1);

    printf("Você tem um total de R$ %2.f em moedas", valor);
    
    return 0;
}