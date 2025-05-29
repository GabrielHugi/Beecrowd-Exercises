#include <stdio.h>
 
int main() {
 
    float x,y;
    scanf("%f%f", &x,&y);
    if (y > 0 && x > 0) {
        printf("Q1\n");
    }
    if (y > 0 && x < 0) {
        printf("Q2\n");
    }
    if (y < 0 && x < 0) {
        printf("Q3\n");
    }
    if (y < 0 && x > 0) {
        printf("Q4\n");
    }
    if (y == 0 && x == 0) {
        printf("Origem\n");
    }
    if (y == 0 && x != 0) {
        printf("Eixo X\n");
    }
    if (y != 0 && x == 0) {
        printf("Eixo Y\n");
    }
    
    
    return 0;
}