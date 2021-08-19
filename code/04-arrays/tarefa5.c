
#include <stdio.h>

int sum_col_matrix(int row, int col, int matrix[row][col], int column) {
    int s = 0;
    for (int i = 0; i < row; i++) {
        s += matrix[i][column];
    }
    return s;
}


int main() {
    int col = 4;
    int row = 5;
    int matrix[row][col];
    int higher_col = 0;
    int higher_sum = 0;


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int k = 0; k < col; ++k) {

        int sum = sum_col_matrix(row, col, matrix, k);
        if (sum > higher_sum) {
            higher_sum = sum;
            higher_col = k;
        }

        printf("Col %d - Sum: %d\n", k, sum);
    }

    printf("Higher sum col: %d\n", higher_col);

    return 0;
}