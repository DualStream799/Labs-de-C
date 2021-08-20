#include <stdio.h>

void sum_sub (int n1, int n2, int *psum, int *psub) {
    *psum = n1 + n2;
    *psub = n1 - n2;
}

int main () {
    int n1, n2;
    int sum;
    int sub;

    printf("Insert first value: ");
    scanf("%d", &n1);

    printf("Insert second value: ");
    scanf("%d", &n2);

    sum_sub (n1, n2, &sum, &sub);

    printf("Sum: %d\nSub: %d\n", sum, sub);



    return 0;
}