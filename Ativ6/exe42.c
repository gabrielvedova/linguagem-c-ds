// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 42.Descubra se um número é positivo ou negativo.

#include <stdio.h>

int main() {
    int num = 0;

    if (num > 0) {
        printf("%d é positivo!!!\n", num);
    } else if (num < 0) {
        printf("%d é negativo!\n", num);
    } else {
        printf("%d é 0\n", num);
    }
}