#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void invertArray(int *array, int size);

void toBinary(long long int num, int *storage, int size);

void mofizBinarySum(int *__array1, int *__array2, int size);

void toDecimal(int *array, long long int *storage, int size);
 
int main() {
    int garbageCollector;
    int *array1 = calloc(32, sizeof(int)), *array2 = calloc(32, sizeof(int));
    long long int *num1 = calloc(1, sizeof(long long)), *num2 = calloc(1, sizeof(long long));
    for (int i = 0; i < 1;) {
        garbageCollector = scanf("%lld %lld", num1, num2);
        if (garbageCollector == EOF) i = 1;
        else {
            toBinary(*num1, array1, 32);
            toBinary(*num2, array2, 32);
            mofizBinarySum(array1, array2, 32);
            toDecimal(array1, num1, 32);
            garbageCollector = printf("%lld\n", *num1);
        }
    }
    free(array1); free(array2); free(num1); free(num2);
    return 0;
}

void invertArray(int *array, int size) {
    int *counterArray = calloc(size, sizeof(int));
    int i2 = size-1;
    for (int i = 0; i < size; i++) {
        counterArray[i] = array[i2];
        i2--;
    }
    for (int i = 0; i < size; i++) {
        array[i] = counterArray[i];
    }
    free(counterArray);
}

void toBinary(long long int num, int *storage, int size) {
    for (int i = 0; i < size; i++) {
        storage[i] = 0;
    }
    for (int i = 0; num != 0 || i < size; i++) {
        storage[i] = num % 2;
        num /= 2;
    }
    invertArray(storage, size);
}

void mofizBinarySum(int *__array1, int *__array2, int size) {
    int num;
    for (int i = 0; i < size; i++) {
        num = __array1[i] + __array2[i];
        if (num == 1) {
            __array1[i] = 1;
        }
        if (num == 2) {
            __array1[i] = 0;
        }
    }
}

void toDecimal(int *array, long long int *storage, int size) {
    long long int num = 0;
    for (int i = 0; i < size; i++) {
            num += array[i] * pow(2, size-(i+1));
    }
    *storage = num;
}