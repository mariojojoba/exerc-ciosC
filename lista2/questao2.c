#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num, final;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num);

    if (num > 0) {
        final = num * 2;
            printf("O dobro do seu número é: %d.", final);

    } else {
        final = num * 3;
            printf("O triplo do seu número é: %d.", final);
    }
    return 0;
}