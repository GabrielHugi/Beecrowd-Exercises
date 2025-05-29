#include <stdio.h>
 
int main() {
 
    int j = 7;
    for(int i = 1; i <= 9; i += 2) {
        j = 7;
        printf("I=%d J=%d\n", i,j);
        j--;
        printf("I=%d J=%d\n", i,j);
        j--;
        printf("I=%d J=%d\n", i,j);
    }
 
    return 0;
}