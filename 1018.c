#include <stdio.h>
 
int main() {
 
    int a,b,c;
    scanf("%d", &a);
    printf("%d\n", a);
    b = 0;
    c = 0;
    
    
    while (b < a - 100) {
        b = b + 100;
        c = c + 1;
    }
    printf("%d nota(s) de R$ 100,00\n", c);
    a = a - (c*100);
    b = 0;
    c = 0;
    
    
    
    while (b < a - 50) {
        b = b + 50;
        c = c + 1;
    }
    printf("%d nota(s) de R$ 50,00\n", c);
    a = a - (c*50);
    b = 0;
    c = 0;
    
    
    
    while (b < a - 20) {
        b = b + 20;
        c = c + 1;
    }
    printf("%d nota(s) de R$ 20,00\n", c);
    a = a - (c*20);
    b = 0;
    c = 0;
    
    
    
    while (b < a - 10) {
        b = b + 10;
        c = c + 1;
    }
    printf("%d nota(s) de R$ 10,00\n", c);
    a = a - (c*10);
    b = 0;
    c = 0;
    
    
    
    while (b < a - 5) {
        b = b + 5;
        c = c + 1;
    }
    printf("%d nota(s) de R$ 5,00\n", c);
    a = a - (c*5);
    b = 0;
    c = 0;
    
    
    
    while (b < a - 1) {
        b = b + 2;
        c = c + 1;
    }
    printf("%d nota(s) de R$ 2,00\n", c);
    a = a - (c*2);
    b = 0;
    c = 0;
    
    
    
    while (b < a) {
        b = b + 1;
        c = c + 1;
    }
    printf("%d nota(s) de R$ 1,00\n", c);
    a = a - (c*1);
    b = 0;
    c = 0;
    
    
 
    return 0;
}