// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//55.A função strcspn() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "CZCASDETRY62580";
    char num[] = "0123456789"; //ordem não é importante

    int n = strcspn(string, num);
    printf("O número de caracteres alfabéticos é: %d\n",n);

    return 0;
}
// A função strcspn() retorna o número de caracteres iniciais da string que não estão presentes na string de caracteres passada como argumento. No caso acima, a string "CZCASDETRY62580" tem 10 caracteres alfabéticos iniciais, então o resultado impresso é 10.