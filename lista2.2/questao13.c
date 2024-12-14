#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float celsius, fahr;

    printf("Digite a temperatura em Celsius para ser convertida em Fahrenheit.\n");
    printf("Digite -999 para encerrar o programa.\n");

    while (1) { 
        printf("\nDigite a temperatura em Celsius: ");
        scanf("%f", &celsius);

        if (celsius == -999) {
            printf("Você finalizou o programa!\n");
            break; 
        }

        fahr = (celsius * 1.8) + 32;
        printf("A temperatura convertida em Fahrenheit: %.2f °F\n", fahr);
        
    }

    return 0;
}
