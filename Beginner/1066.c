#include <stdio.h>
 
int main() {
 
    int pares,impares,positivos,negativos, contagem, valor;
    pares = 0;
    impares = 0;
    positivos = 0;
    negativos = 0;
    contagem = 5;
    while (contagem > 0) {
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }
        if (valor < 0) {
            negativos++;
        }
        if (valor > 0) {
            positivos++;
        }
        contagem--;
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
 
    return 0;
}