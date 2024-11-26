//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;


void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf - Idade: %d - Altura: %.2lf\n\n", p.peso, p.idade, p.altura);
}


void preenchePessoas(pessoa pessoas[], int tamanho) {
	int i;
    for (i = 0; i < tamanho; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        printf("Peso: ");
        scanf("%.2lf", &pessoas[i].peso);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Altura: ");
        scanf("%.2lf", &pessoas[i].altura);
    }
}

int main() {
	int i;
    pessoa pessoas[5];
    
  
    preenchePessoas(pessoas, 5);
    
    
    if (pessoas[0].idade > 20) {
        pessoas[0].idade++;
    }
    
   
    for (i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);
    }
    
    return 0;
}

