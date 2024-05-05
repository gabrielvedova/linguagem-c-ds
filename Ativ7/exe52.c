// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//52. A função strcat() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "Escola ", str2[] = "Técnica", str3[] = "!";
    strcat(str1, str2); //result is stored in str1
    strcat(str1, str3); //result is stored in str1
    printf("%s", str1);

    return 0;
}
// A função strcat() concatena duas strings. No caso acima, a string "Técnica" foi concatenada à string "Escola " e o resultado foi armazenado na string str1. Em seguida, a string "!" foi concatenada à string str1 e o resultado foi armazenado na string str1. O resultado impresso é "Escola Técnica!".