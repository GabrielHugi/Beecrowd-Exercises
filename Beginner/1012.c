#include <stdio.h>
 
int main() {
 
    double A,B,C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    printf("TRIANGULO: %.3f\n", (A*C)/2);
    printf("CIRCULO: %.3f\n", (C*C)*3.14159);
    printf("TRAPEZIO: %.3f\n", ((A+B)/2)*C);
    printf("QUADRADO: %.3f\n", B*B);
    printf("RETANGULO: %.3f\n", B*A);
    
    
    
    
    return 0;
}