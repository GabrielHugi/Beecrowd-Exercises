#include <stdio.h>
 
int main() {
 
    int valor, oogabooga;
    oogabooga = 1;
    scanf("%d", &valor);
    while (oogabooga <= valor) {
        printf("%d\n", oogabooga);
        oogabooga = oogabooga + 2;
    }
 
    return 0;
}