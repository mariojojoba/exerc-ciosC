#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num, ant, suc;

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("O antecessor de %d � %d e seu sucessor � %d.\n", num, ant, suc);
    return 0;
}