#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;

    printf("Digite o valor A:\n");
    scanf("%d", &a);
    
    printf("Digite o valor B:\n");
    scanf("%d", &b);

    printf("Digite o valor C:\n");
    scanf("%d", &c);

    if (a > b && b > c) {
        printf("%d %d %d", a, b, c);
    } else if (b > a && a > c) {
        printf("%d %d %d", b, a, c);
    } else if (c > a && b > a) {
        printf("%d %d %d", c, b, a); 
    }
    return 0;
}