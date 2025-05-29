#include <stdio.h>
 
int main() {
    
    int n,x,y;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (x > y) {
            int help = y;
            y = x;
            x = help;
        }
        sum = 0;
        x++;
        if (x%2 == 0) x++;
        for (; x<y; x += 2) {
            sum += x;
        }
        printf("%d\n", sum);
    }
 
    return 0;
}