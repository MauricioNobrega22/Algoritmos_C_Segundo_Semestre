//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite qual termo da sequ�ncia de Fibonacci deseja ver: ");
    scanf("%d", &n);
    printf("O %d� termo da sequ�ncia de Fibonacci �: %d\n", n, fibonacci(n));
    return 0;
}

