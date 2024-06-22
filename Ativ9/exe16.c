// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 16.O código abaixo apresenta erro de tempo de execução porque declaramos uma variável como long int, mas em scanf usamos% d em vez de% ld. Então vai dar um erro.

#include <stdio.h>
int main()
{
    long int etepd;
    scanf("%d", &etepd);
    return 0;
}