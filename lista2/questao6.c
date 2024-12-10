#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float altura, peso, imc;

    printf("Insira sua altura:\n");
    scanf("%f", &altura);

    printf("Insira seu peso:\n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso normal");
    } else if (imc >= 25 && imc < 30) {
        printf("Acima do peso");
    } else {
        printf("Obeso");
    }
    return 0;
}