#include <stdio.h>
 
int main() {
 
    int n, wathever;
    scanf("%d", &n);
    wathever = 1;
    if (n % 2 == 0) n++;
    while (wathever != n) {
        if (wathever % 2 == 0) {
            printf("%d^2 = %d\n",wathever, wathever*wathever);
        }
        wathever++;
    }
 
    return 0;
}