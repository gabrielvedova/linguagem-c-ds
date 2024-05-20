// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//58.Escreva um programa  para passar Array para Função usando Pass by Pointer.

#include <stdio.h>
void display( char* );
int main()
{
    char s[ ] = "Escola Técnica Estadual Porto Digital";
    display( s );
    return 0;
}
void display( char *ps )
{
    printf( "String : %s\n", ps );
}
