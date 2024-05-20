// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//62.Escreva um programa para imprimir o endereço de uma variável junto com seu valor.

#include <stdio.h>

int main()
{
    char a;
    int x;
    float p, q;

    a = 'A';
    x = 125;
    p = 10.25, q = 18.76;

    printf("%c está armazenado no endereço %u.\n", a, &a);
    printf("%d está armazenado no endereço %u.\n", x, &x);
    printf("%f está armazenado no endereço %u.\n", p, &p);
    printf("%f está armazenado no endereço %u.\n", q, &q);
}
