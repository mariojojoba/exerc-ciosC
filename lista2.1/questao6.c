#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    float atv, me, n1, n2, n3, ma;
    int cont, codigo;
    char conceito;

    me = 0;

    printf("Digite o código do aluno:\n");
    scanf("%d", &codigo);

    for(cont = 1; cont <= 3; cont++) 
    {
        printf("Digite a nota da atividade %d:\n", cont);
            scanf("%f", &atv);
                 me = atv + me;
    } me = me / 3;

    printf("Digite a nota da primeira prova:\n");
    scanf("%f", &n1);

    printf("Digite a nota da segunda prova:\n");
    scanf("%f", &n2);

    printf("Digite a nota da terceira prova:\n");
    scanf("%f", &n3);

    ma = (n1 + n2 * 2 + n3 * 3 + me) / 7;

    if (ma  >= 90) {
        conceito = 'A';
    } else if (ma >= 7.5 && ma < 9.0) {
        conceito = 'B';
    } else if (ma >= 6.0 && ma < 7.5) {
        conceito = 'C';
    } else if (ma >= 4.0 && ma < 6.0) {
        conceito = 'D';
    } else if (ma < 4.0) {
        conceito = 'E';
    }

    printf("\nMédia Final = %.2f\nNota = %c\n\n", ma, conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Aprovado!");
    } else if (conceito == 'D' || conceito == 'E') {
        printf("Reprovado...");
    }
        

    return 0;
}