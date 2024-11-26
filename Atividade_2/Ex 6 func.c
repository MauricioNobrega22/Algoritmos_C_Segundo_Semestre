//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

int maior(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    resultado = maior(num1, num2);

    printf("O maior número entre %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

