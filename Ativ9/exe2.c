// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
//2.No programa C abaixo, mesmo que o valor de a seja igual a 2, ele não imprimirá a saída por causa da instrução break. A instrução break interromperá a execução e sairá do loop.

#include <stdio.h>
int main()
{
int a = 2;
for (;;)
{
   if (a == 2)
   {
   break;
       
   // Ele nunca será executado, então
   // o mesmo erro estará lá.
   printf("Escola Técnica Estadual Porto Digital");
   }
}
return 0;
}

// Resultado: Não exibe a mensagem "Escola Técnica Estadual Porto Digital" pois a instrução break; está presente antes da instrução printf("Escola Técnica Estadual Porto Digital");.