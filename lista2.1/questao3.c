#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;

    printf("Digite o valor A:\n");
    scanf("%d", &a);
    
    printf("Digite o valor B:\n");
    scanf("%d", &b);

    if (a == b) {
        c = a + b;
        printf("%d + %d = %d", a, b, c);
    } else {
        c = a * b;
        printf("%d * %d = %d", a, b, c);
    }
    return 0;
}