#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int cad1, cad2, cad3, cad4, nulo, branco, i;

    cad1 = cad2 = cad3 = cad4 = nulo = branco = 0;

    while (i != 0) {

        printf("Digite:\n1 - Para votar no primeiro candidato.\n2 - Para votar no segundo candidato.\n3 - Para votar no terceiro candidato.\n4 - Para votar no quarto candidato.\n5 - Para voto nulo.\n6 - Para voto em branco.\n0 - Para finalizar votação\n");
        scanf("%d", &i);

        if (i == 1) {
            cad1 = cad1 + 1;
        } else if (i == 2) {
            cad2 = cad2 + 1;
        } else if (i == 3) {
            cad3 = cad3 + 1;
        } else if (i == 4) {
            cad4 = cad4 + 1;
        } else if (i == 5) {
            nulo = nulo + 1;
        } else if (i == 6) {
            branco = branco + 1;
        } else 
            printf("\nOpção inválida.\n");
    }

    printf("\nVocê finalizou a votação.\n");

    printf("\nTotal de votos:\n");

    printf("\nCandidato 1 = %d\nCandidato 2 = %d\nCandidato 3 = %d\nCandidato 4 = %d\nVotos nulos = %d\nVotos em branco = %d\n", cad1, cad2, cad3, cad4, nulo, branco);

    return 0;
}

    