// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//54.A função strtok() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Aprender C é legal."; // nossa string
    // espaço é o delimitador
    char delim[] = " ";

    char* portion1 = strtok(str, delim);
    printf("%s\n", portion1);

    char* portion2 = strtok(NULL, delim);
    printf("%s\n", portion2);

    char* portion3 = strtok(NULL, delim);
    printf("%s\n", portion3);

    char* portion4 = strtok(NULL, delim);
    printf("%s\n", portion4);

    return 0;
}
// A função strtok() divide a string str em tokens, utilizando os caracteres contidos na string delim como delimitadores. A primeira chamada à função strtok() passa a string str e a string delim como argumentos. As chamadas subsequentes passam NULL como primeiro argumento. A função retorna um ponteiro para o token encontrado. No caso acima, a string "Aprender C é legal." foi dividida em tokens utilizando o espaço como delimitador. A primeira chamada à função strtok() retorna o token "Aprender". As chamadas subsequentes retornam os tokens "C", "é" e "legal.".