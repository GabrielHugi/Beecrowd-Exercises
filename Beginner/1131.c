#include <stdio.h>
 
int main() {
 
    int gol1,gol2, i, inter = 0 ,gremio = 0, greNomeIdiotanais = 0;
    int empates = 0;
    i = 1;
    while (i != 2) {
        scanf("%d %d", &gol1, &gol2);
        if (gol1 > gol2) inter++;
        if (gol1 < gol2) gremio++;
        if (gol1 == gol2) empates++;
        do {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &i);
        } while (i != 1 && i != 2);
        greNomeIdiotanais++;
    }
    printf("%d grenais\n", greNomeIdiotanais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if (inter > gremio) printf("Inter venceu mais\n");
    if (inter < gremio) printf("Gremio venceu mais\n");
    if (inter == gremio) printf("Nao houve vencedor\n");
    
 
    return 0;
}