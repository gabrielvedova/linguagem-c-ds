// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//12.A saída pode mudar toda vez que executamos este programa porque ele fornece um valor indesejado em troca do local inválido.

#include <stdio.h>
int a[5];
int main()
{
int s = a[-11];
printf("%d", s);
return 0;
}
