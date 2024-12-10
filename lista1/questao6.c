#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float salario, kwh, porcentagem;

    printf("Insira o seu salário:\n");
    scanf("%f", &salario);

    printf("Quantos KwH foram consumidos?\n");
    scanf("%f", &kwh);

    porcentagem = (0.78 * kwh / salario) * 100;

    printf("A porcentagem do seu salário gasta em energia é %.2f%%", porcentagem);

    return 0;
}