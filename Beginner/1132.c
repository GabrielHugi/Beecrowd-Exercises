#include <stdio.h>
 
int main() {
    int de, ate, soma= 0;
    scanf("%d", &de);
    scanf("%d", &ate);
    if (de > ate) {
        soma = ate;
        ate = de;
        de = soma;
        soma = 0;
    }
    while (de <= ate) {
        if (de % 13 != 0) soma += de;
        de++;
    }
    printf("%d\n", soma);
    return 0;
}