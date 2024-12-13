#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int i, soma;

    soma = 0;

    for(i=1; i <= 20; i++) 

    {
        if (i % 2 == 0) {
            soma = i + soma;   
        }
    }
        printf("A soma dos números pares de 1 a 20 é %d", soma);

    return 0;

}