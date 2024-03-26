// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// Exercício 15.Escreva um programa para inserir dois inteiros e mostrar o resultado da divisão.

#include <stdio.h>

int main() {
    float num1;
    float num2;
    scanf("%f %f", &num1, &num2);
    float divisao = num1 / num2;
    printf("%f\n", divisao);
}