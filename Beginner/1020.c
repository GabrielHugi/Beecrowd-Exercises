#include <stdio.h>
 
int main() {
 
    int N,A,M,D;
    N = 0;
    A = 0;
    M = 0;
    D = 0;
    scanf("%d", &N);
    while (N >= 365) {
        A = A + 1;
        N = N - 365;
    }
    while (N >= 30) {
        M = M + 1;
        N = N - 30;
    }
    while (N >= 1) {
        D = D + 1;
        N = N - 1;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A,M,D);
 
    return 0;
}