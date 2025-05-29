#include <stdio.h>
#include <math.h>
int main() {
 
    int seis, ermm;
    float valor, media;
    seis = 6;
    ermm = 0;
    media = 0;
    while (seis > 0) {
        scanf("%f", &valor);
        if (valor > 0) {
            ermm++;
            media = media + valor;
        }
        seis--;
    }
    printf("%d valores positivos\n", ermm);
    printf("%g\n", (round((media / ermm ) * 10))/10);
    
 
    return 0;
}