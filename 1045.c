#include <stdio.h>
 
int main() {
 
    float a,b,c,m;
    scanf("%f%f%f", &a,&b,&c);
    if (a >= c && c >= b) {
        m = c;
        c = b;
        b = m;
    }
    if (b >= a && a >= c) {
        m = a;
        a = b;
        b = m;
    }
    if (b >= c && c >= a) {
        m = a;
        a = b;
        b = c;
        c = m;
    }
    if (c >= b && b >= a) {
        m = c;
        c = a;
        a = m;
    }
    if (c >= a && a >= b) {
        m = c;
        c = b;
        b = a;
        a = m;
    }
    
    
// hehehehe

    if (a>=b+c) {
        printf("NAO FORMA TRIANGULO\n");
        goto nuhuh;
    }
    if (a*a == (b*b)+(c*c)) {
        printf("TRIANGULO RETANGULO\n");
    }
    if (a*a > (b*b)+(c*c)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (a*a < (b*b)+(c*c)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && a == c) {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
        printf("TRIANGULO ISOSCELES\n");
    }
nuhuh:
    return 0;
}