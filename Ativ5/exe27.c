// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 27.Escreva um programa para verificar se um número inteiro digitado corresponde a uma situação específica da instrução switch-case.


#include <stdio.h>

int main() {
    int num;
    printf("Digite um número de 1 a 5: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("O dia está lindo\n");
        break;
    case 2:
        printf("Uma coisa boa irá acontecer com você\n");
        break;
    case 3:
        printf("Seu pai foi pro hospital!!!\n");
        break;
    case 4:
        printf("You Died\n");
        break;
    case 5:
        printf("Rapaz aconteceu nada mesmo\n");
        break;
    default:
        break;
    }
}
