/*
 * Матрицы спиралькой
 * */
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int i = 1;
    int left = 0, right = n - 1, down = n - 1, up = 0;

    while(i <= n * n) {
        for (int col = left; col <= right; col++) {
            arr[up][col] = i++;
        }
        up++;

        for (int row = up; row <= down; row++) {
            arr[row][right] = i++;
        }
        right--;

        for (int col = right; col >= left; col--) {
            arr[down][col] = i++;
        }
        down--;

        for (int row = down; row >= up; row--) {
            arr[row][left] = i++;
        }
        left++;
    }

    for (int j = 0; j < n; j++) {
        for (int m = 0; m < n; m++) {
            printf("%d ", arr[j][m]);
        }
        printf("\n");
    }
    return 0;
}

