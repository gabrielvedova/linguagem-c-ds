// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//55.Escreva um programa para calcular o volume do cilindro usando o ponteiro.

#include <stdio.h>
int main()
{
    float r, h, v;
    float *pr, *ph, *pv;
    const float PI = 3.14;
    pr = &r;
    ph = &h;
    pv = &v;
    printf( "Insira o raio e a altura : " );
    scanf( "%f %f", pr, ph );
    *pv = PI * (*pr) * (*pr) * (*ph);
    printf( "\nVolume do Cilidro = %f\n", *pv );
    return 0;
}
