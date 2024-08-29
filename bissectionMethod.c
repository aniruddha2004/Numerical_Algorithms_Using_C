#include <stdio.h>
#include <math.h>

double f(double x)
{
    return ((x * x * x) - (4.0 * x) - 9.0);
}

int main()
{
    double a, b, x1, x2, eps = 0.00001;
    printf("Enter the two intervals\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    x1 = (a + b) / 2.0;
    for (int i = 1; i <= 30; i++)
    {
        if ((f(x1) * f(a)) < 0)
            b = x1;
        else if ((f(x1) * f(b)) < 0)
            a = x1;
        x2 = (a + b) / 2.0;
        printf("After %d iteration the root is %f\n", i, x1);
        if (fabs(x2 - x1) < eps)
            break;
        x1 = x2;
    }
    return 0;
}