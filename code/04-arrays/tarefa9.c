#include <stdio.h>
#define MAXW 512
#define MAXH 512


void le_imagem(int max[MAXH][MAXW], int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf("%d", &max[i][j]);
        }
    }
}

void escreve_imagem(int max[MAXH][MAXW], int h, int w) {
    printf("P2\n%d %d\n255\n", w, h);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d ", max[i][j]);
        }
        printf("\n");
    }
}

void limiar(int max[MAXH][MAXW], int h, int w, int lim) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (max[i][j] >= lim) {
                max[i][j] = 255;
            } else {
                max[i][j] = 0;
            }
        }
    }
}

int main() {

    char header[3];
    int height;
    int width;
    int pixel;
    int display = 0;

    // Reading PGM header:
    fgets(header, 3, stdin);

    // Reading PGM width:
    scanf("%d", &width);

    // Reading PGM height:
    scanf("%d", &height);

    // Reading PGM pixel limit:
    scanf("%d", &pixel);

    if (display) {
        printf("Header: %s\n", header);
        printf("Width: %d\n", width);
        printf("Height: %d\n", height);
        printf("Pixel limit: %d\n", pixel);            
        }

    // Validating PGM file format:
    if (!( !strcmp(header,"P2") && height < MAXH && width < MAXW && pixel == 255)) {
        if (display) {
            printf("Validation Complete: Unknown file format detected!\n");
        }
        return 1;
    }

    int matrix[MAXH][MAXW];

    le_imagem(matrix, height, width);
    
    limiar(matrix, height, width, 127);

    escreve_imagem(matrix, height, width);


    return 0;
}