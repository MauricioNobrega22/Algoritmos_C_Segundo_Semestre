//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

int multiplicarValores(int vetor[], int tamanho) {
    int i, produto = 1;
    for (i = 0; i < tamanho; i++) {
        produto *= vetor[i];
    }
    return produto;
}

int main() {
    int i, tamanho;

    printf("Digite o numero de elementos: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os valores:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = multiplicarValores(vetor, tamanho);

    printf("Resultado da multiplicacao dos valores: %d\n", resultado);

    return 0;
}

