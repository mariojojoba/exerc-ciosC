#include <stdio.h>
#include <locale.h>
int main()
{
     setlocale(LC_ALL, "Portuguese");
    
    float num1, num2, num3, media;
    
    printf("Digite a primeira nota:\n");
    scanf("%f", &num1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &num2);

    printf("Digite a primeira nota:\n");
    scanf("%f", &num3);
    
    media = (num1 + num2 + num3) / 3;
    
    printf("Sua media é %.2f\n", media);
    
    return 0;
}
