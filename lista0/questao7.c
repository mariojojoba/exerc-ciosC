#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int ano, idade;

    printf("Digite o ano que voc� nasceu:\n");
    scanf("%d", &ano);

    idade = 2024 - ano;

    printf("Voc� tem %d anos!", idade);

    return 0;
}