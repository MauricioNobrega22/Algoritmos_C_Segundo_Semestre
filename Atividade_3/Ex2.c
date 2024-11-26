//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>
#include <string.h>
#include <locale.h>

//define a estrutura padrão do carro, que contém 3 atributos/variáveis
typedef struct {
	char modelo[50];
	int ano;
	double preco;
} Carro;

//cria uma função modificarPreco(Esta função tem um ponteiro que recebe o objeto do tipo Carro e um novo preço como argumento
void modificarPreco(Carro *c, double novoPreco){
	c->preco = novoPreco;
}

//cria uma função imprimirCarro(Recebe um ponteiro para o objeto do tipo Carro e imprime seus atributos/variáveis 
void imprimirCarro(Carro *c){
	printf("Modelo: %s\n", c->modelo);
	printf("Ano: %d\n", c->ano);
	printf("Preço: R$ %.2lf\n", c->preco);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	//declara a variável carro1 do tipo Carro
	Carro carro1;
	
	//chama os atributos/variáveis, colocando valores específicos
	strcpy(carro1.modelo, "XyZ");
	carro1.ano= 2020;
	carro1.preco = 90000.00;
	
	//mostra mensagem que os dados foram impressos antes da modificação
	printf("Dados antes da modificação:\n");
	//chama a função imprimirCarro e passa o endereço da variável carro1 para imprimir seus dados
	imprimirCarro(&carro1);
	
	//chama a função modificarPreco para o endereço de carro1, fazendo com que o atualiza o valor do atributo preco do carro1
	modificarPreco(&carro1, 115000.00);
	
	//mostra mensagem que os dados foram impressos depois da modificação
	printf("\nDados após a modificação do preço:\n");
	//chama a função imprimirCarro e passa o endereço da variável carro1 para imprimir seus dados
	imprimirCarro(&carro1);
	
	return 0;
}

