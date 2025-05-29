#include <stdio.h>
 
int main() {
    /*
    *             x
    *             |
    *      2      |     1
    *             |
    *  y-----------------------
    *             |
    *      3      |     4
    *             |
    */          
    int x = 2, y = 2;
    while (x != 0 && y != 0) {
        scanf("%d %d", &x, &y);
        if (x != 0 && y != 0) {
            if(x > 0 && y > 0) printf("primeiro\n");
            if(x < 0 && y > 0) printf("segundo\n");
            if(x < 0 && y < 0) printf("terceiro\n");
            if(x > 0 && y < 0) printf("quarto\n");
        }    
    }
    
    return 0;
}