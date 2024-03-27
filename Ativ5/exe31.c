// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 31.Escreva um programa para imprimir uma tabela para o número fornecido usando o loop do-while.


#include <stdio.h>

int main() {
    int i=0, num = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    while (i <= 5)
    {
        i++;
        printf("%d x %d = %d\n", num, i, num*i);
    }
}