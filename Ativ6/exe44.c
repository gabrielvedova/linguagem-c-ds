// Nome: Gabriel Silva Della Vedova 
// Turma: 2A 
// 44.Use o número do dia da semana para calcular e gerar o nome do dia da semana. 

#include <stdio.h> 
int main() { 
    int num; 
    printf("Escolha um número de 1 a 7: "); 
    scanf("%d", &num); 
    switch (num) { 
        case 1: 
            printf("Domingo\n"); 
            break;
        case 2: 
            printf("Segunda\n"); 
            break; 
        case 3: 
            printf("Terça\n"); 
            break; 
        case 4: 
            printf("Quarta\n"); 
            break; 
        case 5: 
            printf("Quinta\n"); 
            break; 
        case 6: 
            printf("Sexta\n"); 
            break; 
        case 7: 
            printf("Sábado\n"); 
            break; 
        default: 
            break; 
    } 
}