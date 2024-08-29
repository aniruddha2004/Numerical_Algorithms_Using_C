#include<stdio.h>

double f(double x, double y){
    return (x + y);
}

int main(){
    double x0, y0, x, y, n, h;
    printf("Enter the initial values of x and y : \n");
    scanf("%lf%lf", &x0, &y0);
    printf("Enter the final value of x : \n");
    scanf("%lf", &x);
    printf("Enter the step length : \n");
    scanf("%lf", &h);
    n = (x - x0) / h;
    for(int i = 1; i<=n; i++){
        y = y0 + (h * f(x0, y0));
        x = x0 + h;
        printf("In %d iteration, x = %f, y = %f\n", i, x, y);
        x0 = x;
        y0 = y;
    }
    return 0;
}





