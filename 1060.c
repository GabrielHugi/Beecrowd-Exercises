#include <stdio.h>
 
int main() {
 
    int b,c;
    float a;
    b = 0;
    c = 0;
    while (b <= 5) {
        scanf("%f", &a);
        if (a > 0) {
            c++;
        }
        b++;
    }
    printf("%d valores positivos\n",c);
 
    return 0;
}