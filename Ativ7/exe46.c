// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//46.A função  strcpy() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>
int main()
{
    char fonte[]="Digital!";
    char destino[50];
    strcpy(destino, fonte);
    printf("%s\n", destino);
    return 0;
}

// A função strcpy() copia o conteúdo da string fonte para a string destino. No caso acima, a string "Digital!" foi copiada para a string destino.