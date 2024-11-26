//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

//declara uma fun��o calcularResultado que recebe um vetor e uma vari�vel n
int calcularResultado(int v[], int n);

int main(){
	//declara 3 vari�veis como um vetor de 5 posi��es, i e resultado
	int vetor[5], i, resultado;
	
	//um loop for que prenche de 0 a 4, vai pegando a posi��o e multiplicando por 2
	for(i = 0; i < 5; i++) {
		vetor[i] = i*2;
	} 
	
	//chama a fun��o calcularResultado com o vetor e 5, a soma dos elementos � guardado na vari�vel resultado
	resultado = calcularResultado(vetor, 5);
	
	printf("O resultado �: %d\n", resultado);
	
	return 0;
}

//define a fun��o calcularResultado, que recebe v e n e ainda declara duas vari�veis i e soma
int calcularResultado(int v[], int n) {
	int i, soma = 0;
	
	//loop for que vai alterando o valor de v[i] e adicionando o valor para a vari�vel soma
	for(i = 0; i < n; i++) {
		soma += v[i];
	}
	//retorna o valor da vari�vel soma da fun��o
	return soma;
}
