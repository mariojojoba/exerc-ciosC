#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char sexo;
    float altura, peso;

    printf("Insira:\nM - Masculino\nF - Feminino\n");
    scanf(" %c", &sexo);

    printf("Insira sua altura:\n");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f KG", peso);
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f KG", peso);
    }
    
    return 0;
}