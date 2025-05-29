#include <stdio.h>
 
int main() {
    float nota, notaa = -23;
    int i = 1;
    while (i == 1) {
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            if (notaa >= 0) {
                printf("media = %.2f\n", (nota+notaa)/2);
                do {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &i);
                } while (i != 1 && i != 2);
                notaa = -23;
            }
            else notaa = nota;
        }
        else printf("nota invalida\n");
    }
 
    return 0;
}