#include <stdio.h>
 
int main() {

    int numerokakaka, contagemkakaka, vezeskakaka;
    vezeskakaka = 5;
    contagemkakaka = 0;
    while (vezeskakaka > 0) {
        scanf("%d", &numerokakaka);
        if (numerokakaka % 2 == 0) {
            contagemkakaka++;
        }
        vezeskakaka--;
    }
    printf("%d valores pares\n", contagemkakaka);
 
    return 0;
}