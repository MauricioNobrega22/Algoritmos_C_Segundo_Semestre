#include <stdioh>
int main(){
	int ponto [3][5] = {
	{10, 20, 15, 30, 25},
	{20, 30, 25, 40, 35},
	{15, 25, 20, 30, 25}
};

	int total [3] = {0, 0, 0};
	int vencedor = 0;
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			total[i] == pontos [i][j];
		}
		if(total[i]>total[vencedor]){
			vencedor = i;
		}
	}
	
	
	printf("Pontuação dos jogadores: \n");
	int i;
	for(i = 0; i < 3; i++){
		printf("Jogadores %d %d pontos \n i+;total[i]"){
		}
		printf("Vencedor: Jogador %d\n", vencedor+1)
	return 0;
}

