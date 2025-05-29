#include <stdio.h>
 
int main() {
 
    int imbela2,ia2,oops, armadoexercitobrasileiro;
    scanf("%d", &oops);
    armadoexercitobrasileiro = oops;
    ia2 = 1;
    for(imbela2 = 2; imbela2 <= 100; imbela2++) {
        scanf("%d", &oops);
        if (oops > armadoexercitobrasileiro) {
            ia2 = imbela2;
            armadoexercitobrasileiro = oops;
        }
    }
    printf("%d\n%d\n", armadoexercitobrasileiro, ia2);
 
    return 0;
}