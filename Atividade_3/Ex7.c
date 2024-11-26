//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

void encontrarMaiorValor(int vetor[], int tamanho, int *maiorValor, int *posicao) {
    *maiorValor = vetor[0];
    *posicao = 0;
    int i;
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > *maiorValor) {
            *maiorValor = vetor[i];
            *posicao = i;
        }
    }
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

    int maiorValor, posicao;

    encontrarMaiorValor(vetor, tamanho, &maiorValor, &posicao);

    printf("Maior valor: %d\n", maiorValor);
    printf("Posiçao do maior valor: %d\n", posicao);

    return 0;
}

