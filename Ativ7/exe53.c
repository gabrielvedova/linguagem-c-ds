// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//53.A função sstrncat() faz o que no código abaixo? 

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Hello ", str2[] = "World!!!";
    strncat(str1, str2, 3); //resultado é armazenado em str1.
    //apenas 3 characters de str2 são copiados para str1
    //copied to str1.
    printf("%s", str1);

    return 0;
}
// A função strncat() concatena os primeiros n caracteres da string str2 à string str1. No caso acima, os primeiros 3 caracteres da string "World!!!" foram concatenados à string "Hello " e o resultado foi armazenado na string str1. O resultado impresso é "Hello Wor".