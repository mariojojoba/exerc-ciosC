#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int num, maior, menor;

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &num);

    maior = menor = num;

    while (num != 0) {
    printf("Digite um n�mero inteiro:\n");
        scanf("%d", &num);
            
        if (num != 0) {
            if (num > maior)
                maior = num;
                    if (num < menor)
                        menor = num;
        }   
    }

    printf("O maior n�mero � %d\nO menor n�mero � %d.", maior, menor);


    return 0;
}