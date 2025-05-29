#include <stdio.h>
 
int main() {
 
    int b,c;
    float a;
    scanf("%f", &a);
    a = a + 0.001;
    b = 0;
    c = 0;
    
    printf("NOTAS:\n");
    
    b = a/100;
    printf("%d nota(s) de R$ 100.00\n", b);
    a = a - (b*100);
    
    b = a/50;
    printf("%d nota(s) de R$ 50.00\n", b);
    a = a - (b*50);
    
    b = a/20;
    printf("%d nota(s) de R$ 20.00\n", b);
    a = a - (b*20);
    
    b = a/10;
    printf("%d nota(s) de R$ 10.00\n", b);
    a = a - (b*10);
    
    b = a/5;
    printf("%d nota(s) de R$ 5.00\n", b);
    a = a - (b*5);
    
    b = a/2;
    printf("%d nota(s) de R$ 2.00\n", b);
    a = a - (b*2);
    
    printf("MOEDAS:\n");
    
    b = a/1;
    printf("%d moeda(s) de R$ 1.00\n", b);
    a = a - (b*1);
    
    b = a/0.5;
    printf("%d moeda(s) de R$ 0.50\n", b);
    a = a - (b*0.5);
    
    b = a/0.25;
    printf("%d moeda(s) de R$ 0.25\n", b);
    a = a - (b*0.25);
    
    b = a/0.1;
    printf("%d moeda(s) de R$ 0.10\n", b);
    a = a - (b*0.1);
    
    b = a/0.05;
    printf("%d moeda(s) de R$ 0.05\n", b);
    a = a - (b*0.05);

    b = a/0.01;
        printf("%d moeda(s) de R$ 0.01\n", b);
    a = a - (b*0.01);
    
    
 
    return 0;
}