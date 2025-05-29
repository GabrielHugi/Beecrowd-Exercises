#include <stdio.h>
 
int main() {
 
    int code,quantity;
    scanf("%d%d", &code,&quantity);
    if (code == 1) {
        printf("Total: R$ %.2f\n", quantity*4.00);
    }
    if (code == 2) {
        printf("Total: R$ %.2f\n", quantity*4.50);
    }
    if (code == 3) {
        printf("Total: R$ %.2f\n", quantity*5.00);
    }
    if (code == 4) {
        printf("Total: R$ %.2f\n", quantity*2.00);
    }
    if (code == 5) {
        printf("Total: R$ %.2f\n", quantity*1.50);
    }
    
 
    return 0;
}