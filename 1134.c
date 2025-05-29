#include <stdio.h>
 
int main() {
 
    int op = 2, al = 0, ga = 0, di = 0;
    while (op != 4) {
        scanf("%d", &op);
        if (op == 1) al++;
        if (op == 2) ga++;
        if (op == 3) di++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", al);
    printf("Gasolina: %d\n", ga);
    printf("Diesel: %d\n", di);
 
    return 0;
}