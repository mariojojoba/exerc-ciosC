#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int dias;
    float km_percorridos, total;

    printf("Quantos dias o carro foi alugado?\n");
    scanf("%d", &dias);

    printf("Quantos km foram percorridos?\n");
    scanf("%f", &km_percorridos);

    dias = dias * 60.00;
    km_percorridos = km_percorridos * 0.15;
    total = km_percorridos + dias;

    printf("Você deve um total de R$ %.2f.", total);

}