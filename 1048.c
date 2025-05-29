#include <stdio.h>
 
int main() {
 
    float a;
    char per;
    per = '%';
    scanf("%f", &a);
    if (a >= 0 && a <= 400) {
        printf("Novo salario: %.2f\n", a*1.15);
        printf("Reajuste ganho: %.2f\n",a*0.15);
        printf("Em percentual: 15 %c\n",per);
    }
    if (a > 400 && a <= 800) {
        printf("Novo salario: %.2f\n", a*1.12);
        printf("Reajuste ganho: %.2f\n",a*0.12);
        printf("Em percentual: 12 %c\n",per);
    }
    if (a > 800 && a <= 1200) {
        printf("Novo salario: %.2f\n", a*1.10);
        printf("Reajuste ganho: %.2f\n",a*0.10);
        printf("Em percentual: 10 %c\n",per);
    }
    if (a > 1200 && a <= 2000) {
        printf("Novo salario: %.2f\n", a*1.07);
        printf("Reajuste ganho: %.2f\n",a*0.07);
        printf("Em percentual: 7 %c\n",per);
    }
    if (a > 2000) {
        printf("Novo salario: %.2f\n", a*1.04);
        printf("Reajuste ganho: %.2f\n",a*0.04);
        printf("Em percentual: 4 %c\n",per);
    }
 
    return 0;
}