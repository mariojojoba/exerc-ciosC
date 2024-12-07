#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float altura, largura, area;

    printf("Digite a altura do retângulo (em cm):\n");
    scanf("%f", &altura);

    printf("Digite a largura do retângulo (em cm):\n");
    scanf("%f", &largura);

    area = altura * largura;

    printf("A área do retângulo é: %.2f cm²", area);
    return 0;
}