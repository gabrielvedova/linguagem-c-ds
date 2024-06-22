// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//5.No código abaixo a instrução printf nunca será executada porque o valor de N será 3 e que nunca é igual a 4. Portanto, a instrução if não será inserida no bloco interno de if.

#include <stdio.h>

int main()
{
// O valor de N é 3
int N = 2 + 1;
    
// 3==4 false então não será
// inserido dentro da instrução if
if (N == 4)
{
   /* código inacessível */
   printf("equal");
}
return 0;
}
