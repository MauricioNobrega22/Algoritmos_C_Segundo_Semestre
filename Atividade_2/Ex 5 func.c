#include <stdio.h>

int soma(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("A soma de %d e %d �: %d\n", num1, num2, resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}

