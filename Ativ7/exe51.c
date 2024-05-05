// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//51.A função memcmp() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "abcdefgh";
    char str2[10] = "abcdeFgh";

    char str3[5] = "dia";
    char str4[5] = "noite";

    int result;
    result = memcmp(str1, str2, 5);
    if (result > 0) {
        printf("str2 é menor que str1");
    }
    else if (result < 0) {
        printf("str1 é menor que str2");
    }
    else {
        printf("str1 é igual a str2");
    }
    return(0);
}
// A função memcmp() compara duas strings até um número n de caracteres. Se as strings forem iguais, a função retorna 0. Se a primeira string for maior que a segunda, a função retorna um valor positivo. Se a primeira string for menor que a segunda, a função retorna um valor negativo. No caso acima, a função compara as strings str1 e str2 até o quinto caractere. A função retorna um valor positivo, pois a string str1 é maior que a string str2 até o quinto caractere. Portanto, a saída será "str2 é menor que str1".