#include <stdio.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL, "Portuguese");
    
    float num, ma;
    int i;
    
    for (i = 1; i <= 3; i++) {
        printf("Digite uma nota:\n");
        scanf("%f", &num);

        ma = num + ma;
    }

    ma = ma / 3;

    printf("A média aritemética: %.2f", ma);
    
    return 0;
}