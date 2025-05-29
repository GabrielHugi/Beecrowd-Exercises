#include <stdio.h>
 
int main() {
 
    double SALARY;
    int NUMBER, HOURS;
    scanf("%d", &NUMBER);
    scanf("%d", &HOURS);
    scanf("%lf", &SALARY);
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY*HOURS);
    
    
    
    return 0;
}