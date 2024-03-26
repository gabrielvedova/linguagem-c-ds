// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 19.Escreva um programa para verificar se o usuário é masculino ou feminino.

#include <stdio.h>

int main() {
    int genero;
    while (genero != 1 && genero != 2)
    {
        printf("Me diga o seu gênero: (1) MASCULINO (2) FEMININO\n");
        scanf("%d", &genero);

        if (genero == 1)
            printf("MASCULINO\n");
        else if (genero == 2)
            printf("FEMININO\n");
        else
            printf("ESCOLHA OUTRO\n");
    }
}