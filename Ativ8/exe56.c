// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//56.Escreva um programa para explicar array de ponteiros.

#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int *p[3], *t;
    int i;
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    printf( "Os valores são : " );
    for( i=0 ; i<3 ; i++ )
    {
    printf( " %d", *p[ i ] );
    }
    t = p[0];
    p[0] = p[2];
    p[2] = t;
    printf( "\nOs valores são : " );
    for( i=0 ; i<3 ; i++ )
    {
    printf( " %d", *p[ i ] );
    }
    printf( "\n" );
    return 0;
}
