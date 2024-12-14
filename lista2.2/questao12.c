#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int num, maior, menor;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num);

    maior = menor = num;

    while (num != 0) {
    printf("Digite um número inteiro:\n");
        scanf("%d", &num);
            
        if (num != 0) {
            if (num > maior)
                maior = num;
                    if (num < menor)
                        menor = num;
        }   
    }

    printf("O maior número é %d\nO menor número é %d.", maior, menor);


    return 0;
}