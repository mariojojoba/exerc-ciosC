#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &num);

    num = num % 2;

    if (num == 0) 
    printf("Seu n�mero � par!");

    else
    printf("Seu n�mero � �mpar!");
    
    return 0;
}