#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, multi;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num1);

    printf("Digite outro número inteiro:\n");
    scanf("%d", &num2);

    multi = num1 * num2;

    printf("%d x %d = %d", num1, num2, multi);


    return 0;
}