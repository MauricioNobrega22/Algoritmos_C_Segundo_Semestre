//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

// Função que calcula o somatório da expressão
int somatorio(int n) {
    int soma = 0;
    int i;  // Declarar variável i fora do for para compatibilidade

    for (i = 1; i <= n; i++) {
        soma += (5 * i * i + 2 * i + 8);  // Aplicar a fórmula
    }

    return soma;
}

int main() {
    int n;

    // Solicitar o valor de n ao usuário
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Exibir o resultado do somatório
    printf("O resultado do somatório é: %d\n", somatorio(n));

    return 0;
}

