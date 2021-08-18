#include <stdio.h>

int main() {
    int n1;
    int n2;
    int loop = 1;

    while (loop) {
        printf("Insert first value: ");
        scanf("%d", &n1);
        printf("Insert second value: ");
        scanf("%d", &n2);

        if (n1 == 0 && n2 == 0) {
            printf("Program ended\n");
            loop = 0;
        } else if (n2 == 0) {
            printf("Invalid value\n");
        } else if (n1 % n2 == 0) {
            printf("%d is multiple of %d\n", n1, n2);
        } else if (n1 % n2 != 0) {
            printf("%d is not multiple of %d\n", n1, n2);
        }
    }
    


    
    return 0;
}
