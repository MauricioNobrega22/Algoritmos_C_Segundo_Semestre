//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

//declara uma função calcularResultado que recebe um vetor e uma variável n
int calcularResultado(int v[], int n);

int main(){
	//declara 3 variáveis como um vetor de 5 posições, i e resultado
	int vetor[5], i, resultado;
	
	//um loop for que prenche de 0 a 4, vai pegando a posição e multiplicando por 2
	for(i = 0; i < 5; i++) {
		vetor[i] = i*2;
	} 
	
	//chama a função calcularResultado com o vetor e 5, a soma dos elementos é guardado na variável resultado
	resultado = calcularResultado(vetor, 5);
	
	printf("O resultado é: %d\n", resultado);
	
	return 0;
}

//define a função calcularResultado, que recebe v e n e ainda declara duas variáveis i e soma
int calcularResultado(int v[], int n) {
	int i, soma = 0;
	
	//loop for que vai alterando o valor de v[i] e adicionando o valor para a variável soma
	for(i = 0; i < n; i++) {
		soma += v[i];
	}
	//retorna o valor da variável soma da função
	return soma;
}
