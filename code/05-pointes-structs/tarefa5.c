#include <stdio.h>
#include <math.h>

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

double eucledian(ponto p1, ponto p2) {
    int b = (p1.x-p2.x);
    int c = (p1.y-p2.y);
    double a = sqrt( b*b + c*c );
    return a;
}

int main() {

    ponto p1, p2;
    double dist_eucl;

    printf("Insert P1 x-axis: ");
    scanf("%d", &p1.x);
    printf(" Insert P1 y-axis: ");
    scanf("%d", &p1.y);
    printf(" Insert P2 x-axis: ");
    scanf("%d", &p2.x);
    printf(" Insert P2 y-axis: ");
    scanf("%d", &p2.y);

    dist_eucl = eucledian(p1, p2);

    printf(" Eucedian distance: %lf\n", dist_eucl);

    return 0;
}
