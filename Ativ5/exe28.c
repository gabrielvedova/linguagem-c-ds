// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 28.Escreva um programa que utiliza a instrução switch para receber um valor inteiro e verifique se ele é igual a 10, 50, 100 ou não é igual a esses números.


#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    switch (num)
    {
    case 10:
        printf("Acertou\n");
        break;
    case 50:
        printf("Acertou\n");
        break;
    case 100:
        printf("Acertou\n");
        break;
    default:
        printf("Escolhe outro número\n");
        break;
    }
}
