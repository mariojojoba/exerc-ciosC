#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int i;
    float num, ma;
    i = num = 0;
    while (num >= 0) {

        printf("Insira uma nota:\n");
            scanf("%f", &num);
                if (num >= 0) {
                    ma = num + ma;
                        i++;
        }
    }
        ma = ma / i;
            printf("A m?dia final ?: %.2f\nE voc? digitou %d n?meros!", ma, i);
    return 0;
}