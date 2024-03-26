// Nome: Gabriel Silva Della Vedova
// Turma: 2A

// 20.Escreva um programa para comparar dois números usando if/else.
// 21.Escreva um programa para comparar dois números usando else/if

#include <stdio.h>

int main() {
    int num1 = 32;
    int num2 = 33;
    if (num1 < num2)
        printf("Num1 é menor que Num2");
    else if (num1 > num2)
        printf("Num1 é maior que Num2");
    else
        printf("Números são iguais");
}