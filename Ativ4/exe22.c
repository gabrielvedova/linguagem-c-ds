// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 22.Escreva um programa para verificar o digito (1 - 5) inserido pelo usuário.

#include <stdio.h>

int main() {
    int num;
    printf("Escreva um número de 1 a 5: ");
    scanf("%d", &num);

    if (num == 1) {
        printf("Número é 1");
    }
    else if (num == 2) {
        printf("Número é 2");
    }
    else if (num == 3) {
        printf("Número é 3");
    }
    else if (num == 4) {
        printf("Número é 4");
    }
    else if (num == 5) {
        printf("Número é 5");
    }
    else {
        printf("Número não está entre 1 e 5");
    }
}