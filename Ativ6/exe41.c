// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 41.Verifique se o usuário digita o código correto.

#include <stdio.h>

int main() {
    int codigo;
    
    while (codigo != 7694)
    {
        printf("Digite um número de 4 dígitos: ");
        scanf("%d", &codigo);
        if (codigo == 7694) {
            printf("Acertou!!!!\n");
            break;
        }
        else {
            printf("Errou mano! Tenta outro.\n");
        }
    }  
}

