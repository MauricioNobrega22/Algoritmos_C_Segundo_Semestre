//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

int primo(int num) {
    int i;  
    if (num < 2) return 0;  
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  
    }
    return 1;  
}


int somaPrimos(int n) {
    int soma = 0, cont = 0, num = 2;

    
    while (cont < n) {
        if (primo(num)) {
            soma += num;  
            cont++;       
        }
        num++;  
    }
    return soma;
}

int main() {
    int n;
    printf("Digite quantos números primos deseja somar: ");
    scanf("%d", &n);

    printf("A soma dos %d primeiros números primos é: %d\n", n, somaPrimos(n));

    return 0;
}

