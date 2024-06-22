// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//4.O valor de sqrt(2) será 1,414. se a instrução verificar a condição, o valor de X não será maior que 5, portanto não será inserido na instrução if e não executará a instrução x++.

#include<math.h>
#include<stdio.h>

int main()
{
// O valor de sqrt(2) é 1,414
double X = sqrt(2);
    
// 1.414>5 condição falsa então
//não será inserido dentro do
// declaração if
if (X > 5)
{
   /* código inacessível */
   X++;
}
return 0;
}
