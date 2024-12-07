#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float celsius, fahr;

    printf("Digite a temperatura em Celcius para ser convertida em Fahrenheit:\n");
    scanf("%f", &celsius);

    fahr = (celsius * 1.8) + 32;

    printf("A temperatura convertida em Fahrenheit:\n%.2f °F", fahr);
    return 0;
}