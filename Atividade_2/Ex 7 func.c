//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

int somaVetor(int vetor[], int tamanho);

int main() {
    int numeros[3];
    int i, resultado;

    for (i = 0; i < 3; i++) {
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    resultado = somaVetor(numeros, 3);

    printf("A soma dos valores �: %d\n", resultado);

    return 0;
}

int somaVetor(int vetor[], int tamanho) {
    int soma = 0, i;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

