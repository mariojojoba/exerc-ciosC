#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int i, num;

    printf("Digite um n�mero inteiro para ver sua tabuada de multiplica��o:\n");
    scanf("%d", &num);

    for(i=1; i <=10; i++) 

    {

    printf("%d x %d = %d\n", num, i, num * i);

    }

    return 0;

}