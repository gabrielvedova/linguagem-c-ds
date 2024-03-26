// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 29.Escreva um programa que pergunta ao usuário sobre uma senha e continua perguntando até que a senha correta seja inserida.



#include <stdio.h>

int main() {
    int senha;
    while (senha != 12345)
    {
        printf("Digite uma senha de números inteiros de 5 dígitos: ");
        scanf("%d", &senha);

        if (senha == 12345) {
            printf("Você entrou!!!\n");
        }
        else {
            printf("Acesso negado\n");
        }
    }
}