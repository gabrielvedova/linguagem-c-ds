// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//45. A função  strlen() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>
int main() {
    char test[]="Escola Técnica Estadual Porto Digital!";
    int length = strlen(test);
    printf("O tamanho de \"%s\" é %d.",test, length);

    int numberOfO = 0;

    for (int i = 0; i < length; i++)
    {
    if (test[i] == 'o' || test[i] == 'O') numberOfO++;
    }
    printf("\nO número de vezes de o na string: %d", numberOfO);
    return 0;
}

// A função strlen() retorna o tamanho da string passada como argumento, ou seja, o número de caracteres da string.