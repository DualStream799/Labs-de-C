// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"


#include <stdio.h>

int main() {
    
    // TODO implemente seu programa aqui
    int line_number;

    printf("Insira um número: ");
    scanf("%d", &line_number);

    for (int i = line_number; i >= 1; i--) {
        for (int j = 1; j <= i; j++) { printf(" ");}
        for (int j = 1; j <= line_number - i; j++) { printf("/");}
        printf("|");
        for (int k = 1; k <= line_number - i; k++) { printf("\\");}
        printf("\n");
    }
    

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}