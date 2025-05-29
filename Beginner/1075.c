#include <stdio.h>

//so para mostrar que sei vou fazer uma função
int funcao();

int n;
int x = 1;
 
int main() {
    scanf("%d", &n);
    int result = 0;
    while (x != 10000) {
        result = funcao();
        if (result != 0) {
        printf("%d\n", result);
        }
        x++;
    }
}

int funcao() {
    if (x % n == 2) {
        return x;
    }
    else {
        return 0;
    }
}

