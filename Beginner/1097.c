#include <stdio.h>
 
int main() {
 
    int j = 0; int jj = 7;
    for(int i = 1; jj <= 15; i+=2) {
        j = jj;
        jj+=2;
        printf("I=%d J=%d\n", i,j);
        j--;
        printf("I=%d J=%d\n", i,j);
        j--;
        printf("I=%d J=%d\n", i,j);
    }
 
    return 0;
}