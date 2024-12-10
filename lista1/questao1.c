#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "Portuguese");
    float cent, mili;

    printf("Digite um valor em centímetros:\n");
    scanf("%f", &cent);

    mili = cent * 10;

    printf("Seu valor convertido em milímetros é %.2f mm", mili);

    return 0;
}