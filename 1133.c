#include <stdio.h>
 
int main() {
 
    int de, ate, soma;
    scanf("%d", &de);
    scanf("%d", &ate);
    if (de > ate) {
        soma = ate;
        ate = de;
        de = soma;
    }
    de++;
    while (de < ate) {
        if (de % 5 == 2 || de % 5 == 3) {
            printf("%d\n", de);
        }
        de++;
    }
 
    return 0;
}