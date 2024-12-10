#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int cigarros_dia, anos_fumados, total_cigarros, tempo_perdido_minutos;
    float tempo_perdido;

    printf("Digite quantos cigarros você fuma por dia:\n");
    scanf("%d", &cigarros_dia);

    printf("Digite quantos anos você fuma:\n");
    scanf("%d", &anos_fumados);

    total_cigarros = cigarros_dia * 365 * anos_fumados;
    tempo_perdido_minutos = total_cigarros * 10;
    tempo_perdido = tempo_perdido_minutos / 1440.0; 

    printf("Você perdeu um total de %.2f dias devido ao fumo.\n", tempo_perdido);

    return 0;
}
