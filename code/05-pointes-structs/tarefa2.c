#include <stdio.h>

void calc_rectangle(int n1, int n2, int *perimeter, int *area) {
    *perimeter = 2*(n1 + n2);
    *area = n1*n2;
}

int main() {
    int n1, n2;
    int perimeter;
    int area;

    printf("Insert first value: ");
    scanf("%d", &n1);

    printf("Insert second value: ");
    scanf("%d", &n2);

    calc_rectangle(n1, n2, &perimeter, &area);

    printf("Perimeter: %d\nArea: %d\n", perimeter, area);

    return 0;
}