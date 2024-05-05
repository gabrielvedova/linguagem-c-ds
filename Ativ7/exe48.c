// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//48.A função memmove() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>
int main()
{
    int fonte[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int destino[10];
    memmove(destino, fonte, 10 * sizeof(int));
    printf("Array de destino:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", destino[i]);
   return 0;
}

// A função memmove() copia n bytes da área de memória apontada por fonte para a área de memória apontada por destino. No caso acima, os 10 elementos do array fonte foram copiados para o array destino.