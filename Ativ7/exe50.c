// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//50.A função  strcmp() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcdeFghij", str2[] = "abcdefghij";
    int resultado;

    // comparação de str1 e str2 até 5 Bytes
    resultado = strncmp(str1, str2, 5);
    printf("strcmp(str1,str2,5)=%d\n", resultado);

    // comparação de str1 e str2 até 7 Bytes
    resultado = strncmp(str1, str2, 7);
    printf("strcmp(str1,str2,7)=%d\n", resultado);
    return 0;
}
// A função strncmp() compara duas strings até um número n de caracteres. Se as strings forem iguais, a função retorna 0. Se a primeira string for maior que a segunda, a função retorna um valor positivo. Se a primeira string for menor que a segunda, a função retorna um valor negativo. No caso acima, a primeira comparação retorna um valor positivo, pois a string str1 é maior que a string str2 até o quinto caractere. A segunda comparação retorna 0, pois as strings str1 e str2 são iguais até o sétimo caractere.