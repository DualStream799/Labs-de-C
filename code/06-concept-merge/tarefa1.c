#include <stdio.h>
#define MAXW 512
#define MAXH 512

typedef struct {
    int height;
    int width;
    int matrix[MAXW][MAXH];
} image;

void le_imagem(image *imagem) {
    for (int i = 0; i < imagem->height; i++) {
        for (int j = 0; j < imagem->width; j++) {
            scanf("%d", &(imagem->matrix[i][j]));
        }
    }
}

void escreve_imagem(image *imagem) {
    printf("P2\n%d %d\n255\n", imagem->width, imagem->height);
    for (int i = 0; i < imagem->height; i++) {
        for (int j = 0; j < imagem->width; j++) {
            printf("%d ", imagem->matrix[i][j]);
        }
        printf("\n");
    }
}

void limiar(image *imagem, int lim) {
    for (int i = 0; i < imagem->height; i++) {
        for (int j = 0; j < imagem->width; j++) {
            if (imagem->matrix[i][j] >= lim) {
                imagem->matrix[i][j] = 255;
            } else {
                imagem->matrix[i][j] = 0;
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
    image picture;
    image *ppicture;
    
    ppicture = &picture;

    ppicture->height = height;
    ppicture->width = width;


    le_imagem(ppicture);
    
    limiar(ppicture, 127);

    escreve_imagem(ppicture);


    return 0;
}