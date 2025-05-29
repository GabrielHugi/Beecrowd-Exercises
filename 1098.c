#include <stdio.h>
 
int main() {
 
    float j=1,jbefore = 1;
    for(float i = 0; i <= 2.1; i+=0.2) {
        j = jbefore;
        printf("I=%g J=%g\n", i, j);
        j++;
        printf("I=%g J=%g\n", i, j);
        j++;
        printf("I=%g J=%g\n", i, j);
        jbefore += 0.2;
    }
}