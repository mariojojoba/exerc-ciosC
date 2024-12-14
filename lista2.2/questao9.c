#include <stdio.h>
#include <locale.h>

int main () {

    int n, i, b;

    printf("Digite a quantidade de números:\n");
    scanf("%d", &n);

    for (i = n; i >= 0; i--) {
    b = n * i;
    printf("%d\n", b);
    }

return 0;
}
