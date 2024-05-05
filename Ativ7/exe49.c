// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//49.A função strcmp() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "AbCd", str3[] = "abcd";
    int resultado;

    // comparando str1 and str2
    resultado = strcmp(str1,str2);
    printf("strcmp(str1,str2)=%d\n", resultado);

    // comparando str1 and str3
    resultado = strcmp(str1, str3);
    printf("strcmp(str1,str3)=%d\n", resultado);
    return 0;

}
// A função strcmp() compara duas strings e retorna um valor inteiro. Se as strings forem iguais, a função retorna 0. Se a primeira string for maior que a segunda, a função retorna um valor positivo. Se a primeira string for menor que a segunda, a função retorna um valor negativo. No caso acima, a primeira comparação retorna um valor negativo, pois a string str1 é menor que a string str2. A segunda comparação retorna 0, pois as strings str1 e str3 são iguais.