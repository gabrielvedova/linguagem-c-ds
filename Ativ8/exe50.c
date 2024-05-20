// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//50.Escreva um programa para demonstrar os operadores de Ponteiro & e * na linguagem C.

#include <stdio.h>

int main() {
    int var = 20;   /* variável real */
    int *ptr;       /* ponteiro para um inteiro */

    ptr = &var;  /* armazenando o endereço de var na variável ponteiro ptr */

    printf("Endereço de var: %p\n", &var);

    /* endereço armazenado no ponteiro ptr */
    printf("Endereço armazenado no ponteiro ptr: %p\n", ptr);

    /* acessando o valor usando o ponteiro */
    printf("Valor de *ptr: %d\n", *ptr);

    return 0;
}
