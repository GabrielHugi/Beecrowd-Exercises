#include <stdio.h>
 
int main() {
    int n = 1;
    int times;
    scanf("%d", &times);
    for(int i = 0; i < times; i++) {
        for (int i2 = 0; i2 < 3; i2++) {
            printf("%d ", n);
            n++;
        }
        printf("PUM\n");
        n++;
    }
 
    return 0;
}