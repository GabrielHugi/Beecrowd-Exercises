#include <stdio.h>
 
int main() {
 
    int x,y,n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (y != 0) printf("%.1f\n", (x*1.0)/y);
        else printf("divisao impossivel\n");
    }
 
    return 0;
}