#include <stdio.h>
#include <locale.h>
int main()
{
     setlocale(LC_ALL, "Portuguese");
    /*Declaração de variáveis*/
    float num1, num2, num3, media;
    /*Entrada de dados*/
    printf("Digite a primeira nota:\n");
    scanf("%f", &num1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &num2);

    printf("Digite a primeira nota:\n");
    scanf("%f", &num3);
    /*Processamento de dados*/
    media = (num1 + num2 + num3) / 3;
    /*Sáida de dados*/
    printf("Sua media é %.2f\n", media);
    return 0;
}
