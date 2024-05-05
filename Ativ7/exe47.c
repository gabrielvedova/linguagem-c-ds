// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//47.A função  strncpy() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char fonte[] = "Porto Digital!";
    char destino[10];
    strncpy(destino, fonte,5);
    printf("%s\n", destino);
    return 0;
    
}

// A função strncpy() copia os primeiros n caracteres da string fonte para a string destino. No caso acima, os primeiros 5 caracteres da string "Porto Digital!" foram copiados para a string destino.