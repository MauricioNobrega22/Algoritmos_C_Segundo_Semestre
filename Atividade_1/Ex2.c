#include <stdio.h>
int main(){
	int n, i, j;
	printf("Tamanho matriz: ");
	scanf("%d", &n);
	int matriz[n][n];
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i < j){
				matriz[i][j] = j + 1;
			}
			else if(j == i){
				matriz[i][j] = i + 1;
			}
			else{
				matriz[i][j] = 0;
			}
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
