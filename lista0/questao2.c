#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float altura, largura, area;

    printf("Digite a altura do ret�ngulo (em cm):\n");
    scanf("%f", &altura);

    printf("Digite a largura do ret�ngulo (em cm):\n");
    scanf("%f", &largura);

    area = altura * largura;

    printf("A �rea do ret�ngulo �: %.2f cm�", area);
    return 0;
}