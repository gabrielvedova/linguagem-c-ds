// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//56.A função  strspn() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "CZCASDETRY62580";
    char letter[] = "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //ordem não é importante
    //2 "" são utilizados para quebrar a linha

    int n = strspn(string, letter);
    printf("Number of alphabetic characters in the label: %d\n", n);
    return 0;
}
// A função strspn() retorna o número de caracteres iniciais da string que estão presentes na string de caracteres passada como argumento. No caso acima, a string "CZCASDETRY62580" tem 10 caracteres alfabéticos iniciais, então o resultado impresso é 10.