//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

int maior(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    resultado = maior(num1, num2);

    printf("O maior n�mero entre %d e %d �: %d\n", num1, num2, resultado);

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

