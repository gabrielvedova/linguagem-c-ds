// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// Exercício 11.Escreva um programa que solicita ao usuário o comprimento de um lado e imprima a área do quadrado:

#include <stdio.h>

int main() {
    int lado;
    scanf("%d", &lado);
    int area = lado*lado;
    printf("Área do quadrado: %d\n", area);
}