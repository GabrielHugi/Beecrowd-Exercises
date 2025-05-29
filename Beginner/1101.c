#include <stdio.h>
 
int main() {
    int M=1, N=1, total;
    for (;M > 0 && N > 0;) {
        total = 0;
        scanf("%d", &M);
        scanf("%d", &N);
        if (M > 0 && N > 0) {
            if (N > M) {
                int gay;
                gay = M;
                M = N;
                N = gay;
            }
            while (M >= N) {
                total += N;
                printf("%d ", N);
                N++;
            }
            printf("Sum=%d\n", total);
        }
    }
 
    return 0;
}