// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 38.Descubra se uma pessoa tem idade suficiente para votar.

#include <stdio.h>
int main() {
    int idade;
    printf("Me diga sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16){
        printf("Idade suficiente para votar\n");
    } else {
        printf("Idade insuficiente para votar\n");
    }

}

