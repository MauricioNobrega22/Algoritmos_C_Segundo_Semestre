//Mauricio Augusto Vieira de Nobrega
#include <stdio.h>

float mediaTurma(int alunos) {
    float notas[alunos];  // As notas agora são float
    float soma = 0;
    int i;  // Variável do laço for declarada fora

    for (i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);  // Leitura de nota como float
        soma += notas[i];
    }
    return soma / alunos;
}

float mediaEscola(int turmas) {
    float mediaGeral = 0;
    int i;  // Variável do laço for declarada fora
    int alunos;

    for (i = 0; i < turmas; i++) {
        printf("Digite o número de alunos da turma %d: ", i + 1);
        scanf("%d", &alunos);
        mediaGeral += mediaTurma(alunos);
    }
    return mediaGeral / turmas;
}

int main() {
    int turmas;
    printf("Digite o número de turmas: ");
    scanf("%d", &turmas);

    printf("A média geral da escola é: %.2f\n", mediaEscola(turmas));
    return 0;
}

