// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//60.Escreva um programa para explicar Passagem por Referência/Endereço/Ponteiro.

#include <stdio.h>
void square( int* );
int main()
{
    int a = 10;
    square( &a );
    printf( "a = %d\n", a );
    return 0;
}
void square( int *pa )
{
    *pa = *pa * *pa;
    printf( "*pa = %d\n", *pa );
}
