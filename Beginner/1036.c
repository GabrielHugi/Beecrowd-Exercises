#include <stdio.h>
 
int main() {
 
    double a,b,c, sqr,r1;
    scanf("%lf%lf%lf", &a,&b,&c);
    sqr = (pow(b,2) - 4*a*c);
    if (sqr < 0 || 2*a == 0) {
        printf("Impossivel calcular\n");
    }
    else {
         r1 = (-b + sqrt(sqr))/(2*a);
        printf("R1 = %.5f\n", r1);
        r1 = (-b - sqrt(sqr))/(2*a);
        printf("R2 = %.5f\n", r1);
    }
    
    return 0;
}