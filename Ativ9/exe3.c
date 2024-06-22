// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//3.O código abaixo mostra o exemplo da instrução continue. No código, há uma instrução continue, a instrução continue transfere o controle para o início do loop. Portanto, não executará as instruções abaixo da instrução continue.

#include <stdio.h>

int main()
{
for (int i = 0; i < 5; i++)
{
   continue;
   printf("Escola Técnica Estadual Porto Digital (ETEPD)");
}
return 0;
}