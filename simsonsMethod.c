#include <stdio.h>
#include <math.h>

// Function to be integrated
double func(double x) {
    return 1 / (1 + x*x);
}

// Simpson's Rule for numerical integration
double simpsons_rule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = func(a) + func(b);

    for (int i = 1; i < n; i += 2) {
        sum += 4 * func(a + i * h);
    }

    for (int i = 2; i < n - 1; i += 2) {
        sum += 2 * func(a + i * h);
    }

    return h / 3 * sum;
}

int main() {
    double a = -1.0; // Lower limit of integration
    double b = 1.0;  // Upper limit of integration
    int n = 1000;    // Number of subintervals

    double result = simpsons_rule(a, b, n);

    printf("Approximate result using Simpson's Rule: %f\n", result);

    return 0;
}
