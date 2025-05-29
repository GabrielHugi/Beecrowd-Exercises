#include <stdio.h>
 
int main() {
 
    int i;
    float n,n2,n3;
    scanf("%d", &i);
    for(; i > 0; i--) {
        scanf("%f %f %f", &n , &n2, &n3);
        printf("%.1f\n", ((n*2)+(n2*3)+(n3*5))/10);
    }
 
    return 0;
}