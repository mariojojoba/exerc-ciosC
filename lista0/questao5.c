#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "Portuguese");
    float raio, perimetro;

    printf("Digite o raio do c�rculo (em cm):\n");
    scanf("%f", &raio);

    perimetro = 2 * 3.14 * raio;

    printf("O Per�metro do seu c�rculo (em cm) �: %.2f cm", perimetro);

    return 0;
}