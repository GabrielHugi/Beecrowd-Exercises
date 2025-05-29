#include <stdio.h>
 
int main() {
 
    double litro;
    int km;
    scanf("%d", &km);
    scanf("%lf", &litro);
    printf("%.3f km/l\n", km/litro);
    return 0;
}