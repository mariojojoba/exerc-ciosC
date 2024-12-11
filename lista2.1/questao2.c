#include <stdio.h>
#include <locale.h>

int main () {
    char sexo, estado;
    int anos;

    printf("M - Masculino\nF - Feminino\nInsira:\n");
    scanf(" %c", &sexo);

    printf("C - Casado(a)\nS - Solteiro(a)\nInsira:\n");
    scanf(" %c", &estado);

    if ((sexo == 'F' || sexo == 'f') && (estado == 'C' || estado == 'c')) {
        printf("Quantos tempo você tem de casada?\n");
        scanf("%d", &anos);
    }

    return 0;
}