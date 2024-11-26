//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

void exibirPares(int numero) {
	int i;
    for (i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Numeros pares de 1 ate %d:\n", numero);
    exibirPares(numero);

    return 0;
}

