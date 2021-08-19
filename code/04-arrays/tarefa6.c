#include <stdio.h>

double average(double vector[], int length) {
    double s = 0;
    for (int i = 0; i < length; i++) {
        s += vector[i];
    }
    return s/length;
}

double variance(double vector[], int length, double avg) {
    double s = 0;
    for (int i = 0; i < length; i++) {
        s += (vector[i] - avg)*(vector[i] - avg);
    }
    return s/(length-1);
}

int main() {
    double vector[1000];
    int length;
    double avg;
    double var;

    printf("Insert vector length: ");
    scanf("%d", &length);

    for (int i = 0; i < length; i++) {
        scanf("%lf", &vector[i]);
    }

    avg = average(vector, length);
    var = variance(vector, length, avg);

    printf("Vector average: %lf\n", avg);
    printf("Vector variance: %lf\n", var);



    return 0;
}