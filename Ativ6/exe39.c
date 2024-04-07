// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 39.Saída "Velho suficiente para votar!" se myAge for maior ou igual a 18. Caso contrário, imprima "Não tem idade suficiente para votar.".

#include <stdio.h>
int main() {
    int idade;
    printf("Me diga sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Velho suficiente para votar!\n");
    } else {
        printf("Não tem idade suficiente para votar.\n");
    }

}

