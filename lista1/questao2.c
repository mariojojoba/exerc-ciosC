#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int dias;
    float valor;

    printf("Insira o valor dos dias trabalhados:\n");
    scanf("%d", &dias);

    valor = dias * 20.00;
     
    valor = valor - (valor * 0.08) ;

    printf("Você ira receber R$ %.2f.", valor);

    return 0;
}