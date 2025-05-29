#include <stdio.h>
 
int main() {
 
    static int password = 2002;
    int input = 3;
    while (input != 2002) {
        scanf("%d", &input);
        if (input != 2002) {
            printf("Senha Invalida\n");
        }
    }
    printf("Acesso Permitido\n");
    
 
    return 0;
}