// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//14.Vamos considerar um array de comprimento 5, ou seja, array[5], mas durante o tempo de execução, se tentarmos acessar 10 elementos, ou seja, array[10], obteremos erros de falha de segmentação chamados erros de tempo de execução. Fornecendo apenas um comprimento de array de 5 Mas na saída tentando acessar mais de 5, ou seja, se tentarmos acessar array[10] durante o tempo de execução, obteremos um erro.

#include <stdio.h>
int main()
{
    int ETEPD[5];
    ETEPD[10] = 10;
    return 0;
}

