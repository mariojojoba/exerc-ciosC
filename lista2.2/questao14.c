#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade, soma, contador;
    float media;

    soma = contador = 0;

    printf("Digite idades para calcular a média.\n");
    printf("Digite uma idade negativa para encerrar o programa.\n");

    while (1) {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Você encerrou o programa.\n");
            break; 
        }

        soma += idade;
        contador++;
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("A média das idades inseridas é %.2f.\n", media);
    } else {
        printf("Nenhuma idade válida foi inserida.\n");
    }

    return 0;
}
