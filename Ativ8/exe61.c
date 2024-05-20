// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//61.Escreva um programa para passar uma string por ponteiro.

#include <stdio.h>
void display( char* );
int main()
{
    char a[ ] = "BRASIL";
    display( a );
    printf( "\n" );
    return 0;
}
void display( char *p )
{
    int i;
    printf( "String : " );
    for( i=0 ; *(p+i) != '\0' ; i++ )
    {
        printf( " %c", *( p + i ) );
    }
}

