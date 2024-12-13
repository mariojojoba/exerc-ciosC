#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int i, num;

    printf("Digite um número inteiro para ver sua tabuada de multiplicação:\n");
    scanf("%d", &num);

    for(i=1; i <=10; i++) 

    {

    printf("%d x %d = %d\n", num, i, num * i);

    }

    return 0;

}