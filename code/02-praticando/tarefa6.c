// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"


#include <stdio.h>

void selector(int n) {
    if (n%3 == 0 && n%5 == 0) {
        printf("por três e por cinco\n");
    } else if (n%5 == 0) {
        printf("apenas por cinco\n");
    } else if (n%3 == 0) {
        printf("apenas por três\n");
    } else {
        printf("nenhum\n");
    }
}

void for_verison(int n) {
    for (int i=1; i <= n; i++) {
        selector(i);
    }
}

void while_verison(int n) {
    int i = 1;
    while (i <= n) {
        selector(i);
        i++;
    }
}


int main() {
    int number;
    // TODO implemente seu programa aqui
    printf("Insira um número: ");
    scanf("%d", &number);

    while_verison(number);
    printf("\n");
    for_verison(number);

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}