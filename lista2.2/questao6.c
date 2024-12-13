#include <stdio.h>
#include <locale.h>

// Esse código não funciona, até pedi ajuda pro chat GPT, mas nem ele sabe o pq não funciona.

int main () {
    setlocale(LC_ALL, "Portuguese");

    int i;
    float altura, maior, menor;

    printf("Digite a altura 1:\n");
    scanf("%f", &altura);

    maior = menor = altura;

    for (i=2; i <= 10; i++) {
        
        printf("Digite a altura %d:\n", i);

        while (getchar() != '\n');

        scanf("%f", &altura);

        if (altura < menor) 
            menor = altura;
        
        if (altura > maior) 
            maior = altura;
        
    }

    printf("A maior altura é %.2fm\nA menor altura é %.2fm\n", maior, menor);

    return 0;
}