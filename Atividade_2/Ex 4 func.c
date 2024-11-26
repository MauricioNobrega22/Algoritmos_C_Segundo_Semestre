//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

// Fun��o que calcula o somat�rio da express�o
int somatorio(int n) {
    int soma = 0;
    int i;  // Declarar vari�vel i fora do for para compatibilidade

    for (i = 1; i <= n; i++) {
        soma += (5 * i * i + 2 * i + 8);  // Aplicar a f�rmula
    }

    return soma;
}

int main() {
    int n;

    // Solicitar o valor de n ao usu�rio
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Exibir o resultado do somat�rio
    printf("O resultado do somat�rio �: %d\n", somatorio(n));

    return 0;
}

