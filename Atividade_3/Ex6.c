//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

int somarValores(int vetor[], int tamanho) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
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

    int soma = somarValores(vetor, tamanho);

    float media = (float)soma / tamanho;

    printf("Soma dos valores: %d\n", soma);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}

