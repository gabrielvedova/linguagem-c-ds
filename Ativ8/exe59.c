// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//59.Escreva um programa para explicar Passagem por Valor.

#include <stdio.h>
void square( int );
int main()
{
    int a = 10;
    square( a );
    printf( "a = %d\n", a );
    return 0;
}
void square( int x )
{
    x = x * x;
    printf( "x = %d\n", x );
}

