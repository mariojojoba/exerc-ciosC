#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num, final;

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &num);

    if (num > 0) {
        final = num * 2;
            printf("O dobro do seu n�mero �: %d.", final);

    } else {
        final = num * 3;
            printf("O triplo do seu n�mero �: %d.", final);
    }
    return 0;
}