#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num);

    num = num % 2;

    if (num == 0) 
    printf("Seu número é par!");

    else
    printf("Seu número é ímpar!");
    
    return 0;
}