// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//54.Escreva um programa para explicar o novo espaçador de formato %p para endereço de variável, ou seja, ponteiro.

#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf( "a : %d\n", *ptr );
    printf( "&a : %p\n", ptr );
    printf( "&a : %u\n", ptr );
    return 0;
}
