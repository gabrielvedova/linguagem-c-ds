// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//51.Escreva um programa para explicar o uso simples de Ponteiro.

#include <stdio.h>
int main()
{
    int a = 10;
    int * p;
    p = &a;
    printf( "a = %d\n", a );
    printf( "&a = %u\n", &a );
    printf( "p = %u\n", p );
    printf( "*p = %d\n", *p );
    printf( "&p = %u\n", &p );
    return 0;
}
