#include <stdio.h>
#include <stdlib.h>
static int ninethou = 2;

unsigned int isPrime(unsigned int n) {
    if (n == 2) return 1;
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

unsigned int getNthPrime(unsigned int n) {
    unsigned int countOfPrimes = 0;
    if (n == 1) return 2;
    unsigned int i = 3;
    for (; countOfPrimes < n; i+=2) {
        if (isPrime(i)) countOfPrimes++;
    }
    return i-2;
}

void getUpToNthPrime(unsigned int n, unsigned int *storage) {
    unsigned int countOfPrimes = 0;
    unsigned int i = 2;
    if (isPrime(i)) {
        storage[countOfPrimes] = i;
        countOfPrimes++;
    }
    i++;
    for (; countOfPrimes < n; i+=2) {
        if (isPrime(i)) {
            storage[countOfPrimes] = i;
            countOfPrimes++;
        }
    }
}

int survivor(int numofpeople) {
    static unsigned int primes[3501];
    static unsigned short position;
    if (ninethou == 2) {
        position = 0;
        ninethou = 1;
        getUpToNthPrime(3501, &*primes);
    }
    if (ninethou == 0) {
        position = 0;
        ninethou = 1;
    }
    //printf("people = %d\njump = %d", numofpeople, numofjump);
    position++;
    if (numofpeople == 1) return 0;
    // returns zero above as for the killing starts on the first soldier
    //if (ninethou == 0) {
    //    ninethou = 1;
    //    return (survivor(numofpeople-1, numofjump) + 1) % numofpeople;
    //}
    int d = position; 
    return (survivor(numofpeople-1) + primes[d-1]) % numofpeople;
    // above line goes jumping from soldier to soldier ^ and looping ^ and btw i kinda get it now
}

int main() {
    ninethou = 2;
    int start, i, results[1000], resultsi = 0;
    scanf("%d", &start);
    char c; while ((c = getchar()) != '\n' && c != EOF) {}
    if (start != 0) {
            results[resultsi] = survivor(start) + 1;
            resultsi++;
            ninethou = 0;
    }
    while (start != 0) {
        scanf("%d", &start);
        char c; while ((c = getchar()) != '\n' && c != EOF) {}
        if (start != 0) {
            results[resultsi] = survivor(start) + 1;
            resultsi++;
        }   
        ninethou = 0;
    }
    for (i = 0; i < resultsi; i++) {
        printf("%d\n", results[i]);
    }
    
    return 0;
    
}