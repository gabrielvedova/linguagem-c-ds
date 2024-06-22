// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//8.Vamos considerar um array de comprimento 5, ou seja, array[5], mas durante o tempo de execução, se tentarmos acessar 10 elementos, ou seja, array[10], obteremos erros de falha de segmentação chamados erros de tempo de execução. Dando apenas um comprimento de array de 5.

#include <stdio.h>

int main()
{
int array[5];
printf("%d", array[10]);
return 0;
}
