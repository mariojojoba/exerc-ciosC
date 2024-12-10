#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int gigas, megas;

    printf("Digite um valor em GigaBytes:\n");
    scanf("%d", &gigas);

    megas = gigas * 1024;

    printf("Seu valor em MegaBytes é %d MB", megas);

    return 0;
}