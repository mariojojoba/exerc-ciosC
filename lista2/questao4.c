#include <stdio.h>
#include <locale.h>

int main () {
    float temp;

    printf("Insira a temperatura:\n");
    scanf("%f", &temp);

    if (temp <= 15) {
        printf("Muito frio");
    } else if (temp >= 16 && temp < 23) {
        printf("Frio");
    } else if (temp <= 23 && temp < 26) {
        printf("Agradável");
    } else if (temp >= 26 && temp <= 30) {
        printf("Calor");
    } else {
        printf("Muito calor");
    }

    return 0;
}