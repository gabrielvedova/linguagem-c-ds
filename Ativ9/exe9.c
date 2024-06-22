// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//9.No exemplo abaixo, o loop for itera 5 vezes, mas a saída será exibida apenas uma vez devido ao ponto e vírgula no final do loop for. Esse tipo de erro é chamado de erro lógico.

// erro lógico
#include <stdio.h>

int main()
{
int i;
for(i = 0; i <= 5; i++);
{
   printf("Escola Técnica Estadual Porto Digital (ETEPD)");
}
   return 0;
}