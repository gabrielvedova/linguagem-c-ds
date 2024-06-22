// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//1.Abaixo está o programa C para demonstrar erro de código inacessível quando uma instrução return está presente antes da instrução print.

#include <stdio.h>
int main()
{
   printf("Escola Técnica Estadual Porto Digital");
   return 0;
   printf("ETEPD");
   printf("Não exibe a mensagem");
};

// Resultado: Não exibe a mensagem "ETEPD" e "Não exibe a mensagem" pois a instrução return 0; está presente antes da instrução printf("ETEPD");.