#include <stdio.h>
 
int survivor(int numofpeople, int numofjump) {
    if (numofpeople == 1) return 0;
    // returns zero above as for the killing starts on the first soldier
    return (survivor(numofpeople-1, numofjump) + numofjump) % numofpeople;
    // above line goes jumping from soldier to soldier ^ and looping ^ and i still dont get how it works to be honest
}
int main() {
    int numoftimes, numofpeople, numofjump;
    scanf("%d", &numoftimes);
    for (int i = 1; i <= numoftimes; i++) {
        scanf("%d %d", &numofpeople, &numofjump);
        printf("Case %d: %d\n", i, survivor(numofpeople, numofjump)+1);
    }
    
    return 0;
}