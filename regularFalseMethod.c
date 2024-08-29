#include<stdio.h>
#include <math.h>

double f(double x)
{
    return (x*x*x) + x + 1.0;
}

int main()
{
    double x0, x1, x2, x3, eps = 0.00001;
    printf("Enter the two points\n");
    scanf("%lf%lf", &x0, &x1);
    x2 = x0 - (((x1 - x0)/(f(x1) - f(x0)))*f(x0));
    for(int i = 0;i < 30; i++)
    {
        if((f(x0) * f(x2)) < 0)
        x1 = x2;
        else
        x0 = x2;
        x3 = x0 - (((x1 - x0)/(f(x1) - f(x0)))*f(x0));
        printf("After %d iteration the root is %lf\n", i, x2);
        if(fabs(x3 - x2) < eps)
        break;
        x2 = x3;
    }
    return 0;
}

