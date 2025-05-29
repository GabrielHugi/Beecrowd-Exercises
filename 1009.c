#include <stdio.h>
 
int main() {
 
    char nome[26];
    double fixo, plus;
    fgets(nome,26,stdin);
    scanf("%lf", &fixo);
    scanf("%lf", &plus);
    printf("TOTAL = R$ %.2f\n", fixo+(plus*0.15));
    
    
    
    
 
    return 0;
}