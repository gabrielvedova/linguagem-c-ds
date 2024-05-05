// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//57.A função sprintf() faz o que no código abaixo?

#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[50];
    int a = 10;
    float b = 20.76, c;
    c = a + b;

    sprintf(buffer, "Soma de %d e %.2f é %.2f", a, b, c);
    // A string "soma de 10 + 20 é 30" é armazenada
    printf("%s", buffer);
    return 0;
}
// A função sprintf() escreve uma string formatada para um buffer. No caso acima, a string "Soma de 10 e 20.76 é 30.76" é armazenada no buffer. O buffer é então impresso na tela.