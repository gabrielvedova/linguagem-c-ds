// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//52.Escreva um programa para explicar que um ponteiro pode apontar variáveis ​​diferentes para diferentes ponto do tempo.

#include<stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int * p;
    p = &a;
    printf( "*p = %d\n", *p );
    p = &b;
    printf( "*p = %d\n", *p );
    p = &c;
    printf( "*p = %d\n", *p );
    return 0;
}