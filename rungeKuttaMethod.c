#include<stdio.h>

double f(double x, double y){
    return x + (y * y);
}

int main(){
    double x0, x, y, K1, K2, K3, K4, K, h;
    printf("Enter the initial values of x and y : \n");
    scanf("%lf%lf", &x, &y);
    printf("Enter the final value of x : \n");
    scanf("%lf", &x0);
    printf("Enter the step length : \n");
    scanf("%lf", &h);
    while(x <= x0){
        printf("At x = %f, y = %f\n", x, y);
        K1 = h * f(x,y);
        K2 = h * f(x + (h/2.0), y + (K1/2.0));
        K3 = h * f(x + (h/2.0), y + (K2/2.0));
        K4 = h * f(x + h, y + K3);
        K = (K1 + (K2 + K3) * 2.0 + K4)/6.0;
        x = x + h;
        y = y + K;
    }
    return 0;
}









