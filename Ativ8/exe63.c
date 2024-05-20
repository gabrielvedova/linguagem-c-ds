// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//63.Escreva um programa que faça com que um ponteiro aponte para outro ponteiro, criando assim uma cadeia de ponteiros.


#include <stdio.h>
int main ( )
{
    int x, *p1, **p2;
    x = 100;
    p1 = &x;
    p2 = &p1;
    printf ("%d",**p2);
}
