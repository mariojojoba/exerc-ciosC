#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "Portuguese");
    float raio, perimetro;

    printf("Digite o raio do círculo (em cm):\n");
    scanf("%f", &raio);

    perimetro = 2 * 3.14 * raio;

    printf("O Perímetro do seu círculo (em cm) é: %.2f cm", perimetro);

    return 0;
}