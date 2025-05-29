#include <stdio.h>
 
int main() {
    char opt;
    int cob=0, coe=0, rat=0, sap=0, n, temporary;
    float coep, ratp, sapp;
    scanf("%d", &n);
    for (int i = 0; i<n; i++) {
        scanf("%d %c", &temporary, &opt);
        cob += temporary;
        switch(opt) {
            case 'C':
                coe += temporary;
            break;
            
            case 'R':
                rat += temporary;
            break;
            
            case 'S':
                sap += temporary;
            break;
            
            default:
            break;
        }
    }
    printf("Total: %d cobaias\n", cob);
    printf("Total de coelhos: %d\n", coe);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", sap);
    printf("Percentual de coelhos: %.2f %\n", ((0.0+coe)/cob)*100);
    printf("Percentual de ratos: %.2f %\n", ((0.0+rat)/cob)*100);
    printf("Percentual de sapos: %.2f %\n", ((0.0+sap)/cob)*100);
    return 0;
}