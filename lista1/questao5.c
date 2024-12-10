#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float volume, raio, altura;

    printf("Digite o raio do cilindro:\n");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro:\n");
    scanf("%f", &altura);

    volume = 3.14 * (raio*raio) * altura;

    printf("O volume do seu cilindro é %.2f.\n", volume);

    return 0;
}