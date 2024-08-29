#include <stdio.h>

void gaussianElimination(double mat[4][5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double ratio = mat[j][i] / mat[i][i];
            for (int k = 0; k <= n; k++) {
                mat[j][k] -= ratio * mat[i][k];
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        mat[i][n] /= mat[i][i];
        mat[i][i] = 1;
        for (int j = i - 1; j >= 0; j--) {
            mat[j][n] -= mat[j][i] * mat[i][n];
            mat[j][i] = 0;
        }
    }
}

int main() {
    double mat[4][5] = {
        {10, -7, 3, 5, 6},
        {-6, 8, -1, -4, 5},
        {3, 1, 4, 11, 2},
        {5, -9, -2, 4, 7}
    };

    int n = 4; // Number of equations

    // Applying Gaussian elimination
    gaussianElimination(mat, n);

    // Output the solutions
    printf("Solution:\n");
    for (int i = 0; i < n; i++) {
        printf("x%d = %.2f\n", i + 1, mat[i][n]);
    }

    return 0;
}
