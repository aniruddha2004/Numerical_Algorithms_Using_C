#include<stdio.h>
#include<math.h>

double f(double x)
{
    return ((x * x * x) + x + 1.0);
}

double df(double x)
{
    return ((3.0 * x * x) + 1.0);
}

int main()
{
    double x0, x1, eps = 0.00001;
    printf("Enter the first approximation of the root\n");
    scanf("%lf", &x0);
    x1 = x0 - (f(x0)/df(x0));
    int i = 1;
    while(fabs(x1 - x0) > eps)
    {
        printf("The %d approximation of the root is %f\n", i, x0);
        x0 = x1;
        x1 = x0 - (f(x0)/df(x0));
        i++;
    }
    printf("The %d approximation of the root is %f\n", i, x1);
    printf("\nThe root of the equation is = %f", x1);
    return 0;
}

