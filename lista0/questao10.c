#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    float preco, desconto;

    printf("Insira o valor produto:\n");
    scanf("%f", &preco);

    printf("Digite o porcentual de desconto:\n%%");
    scanf("%f", &desconto);

    desconto = (preco * desconto) / 100;
    preco = preco - desconto;

    printf("O valor final do produto com desconto é R$ %.2f\n", preco);
}