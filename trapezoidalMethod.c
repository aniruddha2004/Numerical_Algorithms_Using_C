#include<stdio.h>

double f(double x){
    return 1.0/(1.0 + (x * x));
}

int main(){
    double xn = 6, x0 = 0, n = 6, h, result = 0;
    h = (xn - x0) / n;
    result+=(f(x0) + f(xn));
    for(double i = x0+1; i < xn; i++){
        result+=(2.0 * f(i));
    }
    result*=(h/2.0);
    printf("The answer = %f", result);
    return 0;
}


