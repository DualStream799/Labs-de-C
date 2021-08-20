#include <stdio.h>

typedef struct {
    int x;
    int y;
} ponto;

int modulo (int n) {
    if (n >= 0 ) {
        return n;
    } else {
        return -n;
    }
}

int manhattan(ponto p1, ponto p2) {
    return modulo(p1.x-p2.x) + modulo(p1.y-p2.y);
}

int main() {

    ponto p1, p2;
    int dist_man;

    printf("Insert P1 x-axis: ");
    scanf("%d", &p1.x);
    printf(" Insert P1 y-axis: ");
    scanf("%d", &p1.y);
    printf(" Insert P2 x-axis: ");
    scanf("%d", &p2.x);
    printf(" Insert P2 y-axis: ");
    scanf("%d", &p2.y);

    dist_man = manhattan(p1, p2);

    printf(" Manhattan distance: %d\n", dist_man);

    return 0;
}
