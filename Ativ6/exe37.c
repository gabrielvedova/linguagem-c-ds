// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 37.Calcule a porcentagem da pontuação de um usuário em relação à pontuação máxima de um jogo.

#include <stdio.h>
int main() {
    float pontosJogador1 = 23.4;
    float pontosJogador2 = 10.6;
    float pontoTotal = pontosJogador1+pontosJogador2;
    float porcent1 = (pontosJogador1/pontoTotal)*100;
    float porcent2 = (pontosJogador2/pontoTotal)*100;

    printf("Porcentagem de Pontuação\nJogador 1: %f\nJogador 2: %f\n", porcent1, porcent2);
}

