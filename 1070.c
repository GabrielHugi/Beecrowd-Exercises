#include <stdio.h>
 
int main() {
 
    int x,y;
    y = 6;
    scanf("%d", &x);
    if (x % 2 == 0) {
        x = x+1;
    }
    while (y > 0) {
        printf("%d\n", x);
        x = x+2;
        y--;
    }
 
    return 0;
}