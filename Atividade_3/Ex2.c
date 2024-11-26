//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>
#include <string.h>
#include <locale.h>

//define a estrutura padr�o do carro, que cont�m 3 atributos/vari�veis
typedef struct {
	char modelo[50];
	int ano;
	double preco;
} Carro;

//cria uma fun��o modificarPreco(Esta fun��o tem um ponteiro que recebe o objeto do tipo Carro e um novo pre�o como argumento
void modificarPreco(Carro *c, double novoPreco){
	c->preco = novoPreco;
}

//cria uma fun��o imprimirCarro(Recebe um ponteiro para o objeto do tipo Carro e imprime seus atributos/vari�veis 
void imprimirCarro(Carro *c){
	printf("Modelo: %s\n", c->modelo);
	printf("Ano: %d\n", c->ano);
	printf("Pre�o: R$ %.2lf\n", c->preco);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	//declara a vari�vel carro1 do tipo Carro
	Carro carro1;
	
	//chama os atributos/vari�veis, colocando valores espec�ficos
	strcpy(carro1.modelo, "XyZ");
	carro1.ano= 2020;
	carro1.preco = 90000.00;
	
	//mostra mensagem que os dados foram impressos antes da modifica��o
	printf("Dados antes da modifica��o:\n");
	//chama a fun��o imprimirCarro e passa o endere�o da vari�vel carro1 para imprimir seus dados
	imprimirCarro(&carro1);
	
	//chama a fun��o modificarPreco para o endere�o de carro1, fazendo com que o atualiza o valor do atributo preco do carro1
	modificarPreco(&carro1, 115000.00);
	
	//mostra mensagem que os dados foram impressos depois da modifica��o
	printf("\nDados ap�s a modifica��o do pre�o:\n");
	//chama a fun��o imprimirCarro e passa o endere�o da vari�vel carro1 para imprimir seus dados
	imprimirCarro(&carro1);
	
	return 0;
}

