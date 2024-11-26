//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

void exibirImpares(int limite) {
	int i;
    for (i = 1; i <= limite; i += 2) { 
        if (i % 7 != 0) { 
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero limite: ");
    scanf("%d", &numero);

    printf("Numeros impares ate %d (exceto multiplos de 7):\n", numero);
    exibirImpares(numero);

    return 0;
}

