#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1 = 0, num2 = 1, fibo, i;

    printf("Sequência de Fibonacci:\n");
        printf("%d\n", num1); 
            printf("%d\n", num2); 

    for (i = 2; i < 10; i++) { 
        fibo = num1 + num2; 
            printf("%d\n", fibo);
                num1 = num2;
                    num2 = fibo;
    }

    return 0;
}
