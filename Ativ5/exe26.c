// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 26.Escreva um programa para exibir os conteúdos de duas variáveis string. Utilize o '%s'  como especificador de formato para a string na linguagem c.


#include <stdio.h>

int main() {
    char string1[] = "fala isso pq n pode xingar\n";
    char string2[] = "Pessoa gentil";

    printf("%s %s", string2, string1);
}
