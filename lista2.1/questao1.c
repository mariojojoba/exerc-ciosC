#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, soma;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);

    printf("Digite o valor de B:\n");
    scanf("%d", &b);

    printf("Digite o valor de C:\n");
    scanf("%d", &c);

    soma = a + b;
    if (soma < c) {
        printf("%d + %d = %d", a,b,soma);
    } else {
        printf("Condição não inválida, a soma de A e B é maior que C");
    }

    return 0;
}