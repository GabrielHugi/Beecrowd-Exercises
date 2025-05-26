/* 
beecrowd ad-hoc exercise 1086
made by Gabriel Loureiro Amorim Hugi
*/

#include <stdio.h>
//#include <windows.h>
#include <unistd.h>

/*
*************************
*quicksort
*************************
*/


void swap(int* a, int* b);
int partition(int* array, int min, int max);
void quickSort(int* array, int min, int max);
void zeroe (int* o);

int main () {

  // setup
  int ballroom[2]; // sizes x, y  centimeters
  int plankLenght; // centimeters
  int numberOfPlanks; // in planks, wood, tree, idk
  scanf("%d %d", &ballroom[0], &ballroom[1]); // comes in meters
  ballroom[0] *= 100; ballroom[1] *= 100; // fixed
  scanf("%d", &plankLenght);
  scanf("%d", &numberOfPlanks);
  int plankSizes[numberOfPlanks]; // centimeters
  for (int i = 0; i < numberOfPlanks; i++) {
    scanf("%d", &plankSizes[i]);
  }


  /* 
  my plan to tackle this shit
  probably first order up bigger to smaller
  then i can get a variable to store the ammount of planks left to fill up
  and then i can go picking the planks like
  if (plank[0] + plank[last] = ballroom[0 or 1]) then {
    take the two planks and add their position to some blacklist variable
    or maybe that variable wont be needed but anyways remove 1 from the planks
    left to fill variable and continue doing this shit.
  }
  then at the end, if planks left to fill is zero at the end we say it's possible
  and give the number of planks we used which we will also store
  NOTE THAT WE HAVE TO DO THIS FOR BOTH X FACING AND Y FACING BOARD
  ^ and then we compare the results and send the smaller or say its impossible
  */
  // order up 
  quickSort(plankSizes, 0, numberOfPlanks-1);


  //segment ballroom[0], call it X
  // remember, can end at any point that the two planks be smaller than floor
  int completed = 0; // completed rows. If this == ballroom[1] at any point then we got a match
  int taken[numberOfPlanks]; zeroe(taken, numberOfPlanks);
  int planksUsedX = 0;

  for (int i = 0; i < numberOfPlanks && completed != ballroom[1]; i++) {
    for (int i2 = 0; i2 < numberOfPlanks && completed != ballroom[1]; i2++) {
      if (i != i2 && taken[i] != 1 && taken[i2] != 1) {
        int res = plankSizes[i] + plankSizes[i2];
        if (res < ballroom[0]) break;
        if (plankSizes[i] == ballroom[0]) {
          completed++;
          planksUsedX++;
          taken[i] = 1;

        }
        if (plankSizes[i2] == ballroom[0]) {
          completed++;
          planksUsedX++;
          taken[i2] = 1;

        }
        
        if (res == ballroom[0]) {
          completed++;
          planksUsedX += 2;
          taken[i] = 1;
          taken[i2] = 1;
        }
      }
    }
  }
  if (completed == ballroom[1]) {

  }

  return 0;
}

void zeroe (int* o, int len) {
  for (int i = 0; i < len; i++) {
    o[i] = 0;
  }
} 

void quickSort(int* array, int min, int max) {
  if (min < max) {
    int pp = partition(array, min, max);
    quickSort(array, min, pp-1);
    quickSort(array, pp+1, max);
  }
}

int partition(int* array, int min, int max) {
  int posMinimum = min; int posMaximum = max;
  int pivot = array[min];
  while(posMinimum < posMaximum) {
    while (array[posMinimum] <= pivot && posMinimum < max) {
      posMinimum++;
    }
    while (array[posMaximum] > pivot && posMaximum > min) {
      posMaximum--;
    }
    if (posMinimum < posMaximum) swap(&array[posMinimum], &array[posMaximum]);    
  }
  if (min != posMaximum) swap(&array[min], &array[posMaximum]);
  return posMaximum;
}

void swap(int* a, int* b) {
  // assuming a = 3 and b = 5
 *b = *a + *b; // 8
 *a = *b - *a; // 5
 *b = *b - *a; // 3
}