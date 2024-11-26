//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

//cria a estrura padr�o para uma pessoa e declara seus atributos/vari�veis
typedef struct {
	double peso;
	int idade;
	double altura;
} pessoa;

//cria��o de uma fun��o para imprimir os atrivutos de uma pessoa(da estrutura acima)
void imprimePessoa(pessoa p) {
	printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);
}

//declar�ao da fun��o main
int main() {
	//declara��o de um vetor com 5 posi��es e uma vari�vel chamada p1
	pessoa pessoas[5], p1;
	
	//preenche com valores espec�ficos a primeira pessoa do vetor, usando os parametros da estrutura
	pessoas[0].peso = 80.6;
	pessoas[0].idade = 40;
	pessoas[0].altura = 1.70;
	
	//atribuiu os valores da primeira pessoa para a vari�vel p1
	p1 = pessoas[0];
	
	//verifica se a idade da primeira pessoa � menor que 20, se sim incrementa mais 1 na idade
	if (p1.idade > 20)
		p1.idade++;
	
	//atribuiu os dados da primeira pessoa para a segunda do vetor	
	pessoas[1] = pessoas[0];
	
	//chama a fun��o imprimePessoa e imprime os dados do vetor que foram atrivuidos acima
	imprimePessoa(p1);
	imprimePessoa(pessoas[0]);
	imprimePessoa(pessoas[1]);
	imprimePessoa(pessoas[2]);
	imprimePessoa(pessoas[3]);
	imprimePessoa(pessoas[4]);
	
	return 0;
}
