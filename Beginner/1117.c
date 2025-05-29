#include <stdio.h>
 
int main() {
    float nota, notaa = -23;
    int i = 0;
    while (i < 1) {
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            if (notaa >= 0) {
                printf("media = %.2f\n", (nota+notaa)/2);
                i = 10;
            }
            notaa = nota;
        }
        else printf("nota invalida\n");
    }
 
    return 0;
}