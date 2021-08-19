// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int main(int argc, char *argv[]) {

    /* TODO: conserte o código abaixo */
    int size = 5;
    long vector[size];
    int i;

    printf("Insert values:\n");

    for (int i = 0; i < size; i++) {
        scanf("%ld", &vector[i]);
    }
	
	for(i = 0; i <= size; i++) {
		if (vector[i] % 2 == 0) {
			printf("Par! ");
		}
		printf("i: %d, vetor[i]: %ld\n", i, vector[i]);
	}

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"
	
	return 0;	
}
