// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//57.Escreva um programa para para explicar array e ponteiros.

#include <stdio.h>
int main()
{
    int a[ ] = { 10, 20, 30, 40, 50 };
    int *p;
    int i;
    p = &a[0];
    /* p = a; */
    printf( "Os elementos do array são (a[i]) :" );
    for( i=0 ; i<5 ; i++ )
    {
        printf( " %d", a[ i ] );
    }
    printf( "\nOs elementos do array são (i[a]) :" );
    for( i=0 ; i<5 ; i++ )
    {
        printf( " %d", i[a] );
    }
    printf( "\nOs elementos do array são (*(a+i)):" );
    for( i=0 ; i<5 ; i++ )
    {
        printf( " %d", *( a + i ) );
    }
    printf( "\nOs elementos do array são (*(p+i)):" );
    for( i=0 ; i<5 ; i++ )
    {
        printf( " %d", *( p + i ) );
    }printf( "\nOs elementos do array são (p[i]) :" );
    for( i=0 ; i<5 ; i++ )
    {
        printf( " %d", p[ i ] );
    }
    printf( "\nOs elementos do array são (*p++) :" );
    for( i=0 ; i<5 ; i++ )
    {
        printf( " %d", *p++ );
    }
    printf( "\n" );
    return 0;
}

