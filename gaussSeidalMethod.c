#include<stdio.h>
#include<math.h>
int main(){
    double x0 = 0, y0 = 0, z0 = 0, x, y, z, eps = 0.0001;
    int i = 1;
    while(1){
        x = (17.0 - y0 + 2.0 * z)/20.0;
        y = (-18.0 + z0 - 3.0 * x)/20.0;
        z = (25 + 3.0 * y - 2.0 * x)/20.0;
        printf("After %d iterations, x = %f, y = %f and z = %f\n", i, x, y, z);
        if(fabs(x - x0) < eps && fabs(y - y0) < eps && fabs(z - z0) < eps){
            printf("\nValues after converging to solution , x = %f, y = %f and z = %f", x, y, z);
            break;
        }
        x0 = x;
        y0 = y;
        z0 = z;
        i++;
    }
    return 0;
}



