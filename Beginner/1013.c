#include <stdio.h>
 
int main() {
 
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a >= b && a >= c) {
        printf("%d eh o maior\n", a);
        goto end;
    }
    if (b >= a && b >= c) {
        printf("%d eh o maior\n", b);  
        goto end;
    }
    if (c >= a && c >= b) {
        printf("%d eh o maior\n", c);  
        goto end;
    }
end:
    
 
    return 0;
}