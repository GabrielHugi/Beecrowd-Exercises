#include <stdio.h>
 
int main() {
 
    int x = 1, y = 3;
    while (x != y) {
        scanf("%d %d", &x,&y);
        if (x != y) {
            if (x < y) printf("Crescente\n");
            else printf("Decrescente\n");
        }
    }
 
    return 0;
}