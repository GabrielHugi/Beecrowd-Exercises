#include <stdio.h>
 
int main() {
 
    int d,d1,d2,h,h1,h2,m,m1,m2,s,s1,s2;
    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    d = d2 - d1;
    if (h2 >= h1 && m2 >= m1) {
        //h = h1 - h2;
        h = h2 - h1;
    }
    else {
        d--;
        h = h2 - h1 + 24;
    }
    if (m2 >= m1) {
        m = m2 - m1;
    }
    else {
        h--;
        m = m2 - m1 + 60;
    }
    if (s2 >= s1) {
        s = s2 - s1;
    }
    else {
        m--;
        s = s2 - s1 + 60;
    }
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
    
 
    return 0;
}