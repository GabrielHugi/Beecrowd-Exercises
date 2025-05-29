#include <stdio.h>
 
int main() {
 
    int N,H,M,S;
    N = 0;
    H = 0;
    M = 0;
    S = 0;
    scanf("%d", &N);
    while (N >= 3600) {
        H = H + 1;
        N = N - 3600;
    }
    while (N >= 60) {
        M = M + 1;
        N = N - 60;
    }
    while (N >= 1) {
        S = S + 1;
        N = N - 1;
    }
    printf("%d:%d:%d\n",H,M,S);
    return 0;
}