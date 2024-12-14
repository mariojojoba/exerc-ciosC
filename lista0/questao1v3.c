#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int num, contadormuitoloco3mil, x;

    printf("Quantas notas você vai inserir?\n");
    scanf("%d", &contadormuitoloco3mil);

    for (x=1; x <= contadormuitoloco3mil; x++) {
    printf("Digite a nota %d:\n", x);
    scanf("%d", &num);
    }

    return 0;
}