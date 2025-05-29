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
void zeroe (int* o, int len);

int main () {
  int running = 1;
  // setup
  while (running == 1) {
    int ballroom0Doable = 1, ballroom1Doable = 1;
    int ballroom[2]; // sizes x, y  centimeters
    int plankWidth; // centimeters, renamed to width for better non confusion
    int numberOfPlanks; // in planks, wood, tree, idk
    scanf("%d %d", &ballroom[0], &ballroom[1]); // comes in meters
    if (ballroom[0] == 0 && ballroom[1] == 0) {
      running = 0;
      break;
    }
    ballroom[0] *= 100; ballroom[1] *= 100; // fixed
    scanf("%d", &plankWidth);
    scanf("%d", &numberOfPlanks);
    int plankSizes[numberOfPlanks]; // meters actually, look below
    for (int i = 0; i < numberOfPlanks; i++) {
      scanf("%d", &plankSizes[i]);
      plankSizes[i] *= 100; // now centimeters
    }

    // for optimization
    if ((double)ballroom[0]/(double)plankWidth != (int)ballroom[0]/(int)plankWidth) {
      ballroom0Doable = 0;
    }
    if ((double)ballroom[1]/(double)plankWidth != (int)ballroom[1]/(int)plankWidth) {
      ballroom1Doable = 0;
    }
    if (ballroom0Doable == 0 && ballroom1Doable == 0) {
      printf("impossivel\n");
    }
    else {
      


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

      ------------------------------------------------------------------
      I disregarded this plan when i learned about two pointer technique
      keeping it here for sake of history
      ------------------------------------------------------------------
      */
      quickSort(plankSizes, 0, numberOfPlanks-1);


      //segment ballroom[0], call it X
      // remember, can end at any point that the two planks be smaller than floor
      int neededForX = 0, neededForY = 0; // ammount of planks needed to fill it up. if value is zero then not possible
      int completed = 0; // completed rows in centimeters by the way. If this == ballroom[1] at any point then we got a match
      int taken[numberOfPlanks]; zeroe(taken, numberOfPlanks);
      int planksUsed = 0;
      // sum up two point with a simple check for individual planks that can fill shit up
      for (int i = 0; i < numberOfPlanks && completed != ballroom[1]; i++) {
        if (plankSizes[i] == ballroom[0]) {
          completed+=plankWidth;
          planksUsed++;
          taken[i] = 1;
        }
      }
      int left = 0, right = numberOfPlanks-1;
      while (left < right && completed != ballroom[1]) {
          if (taken[left]) { 
            left++; 
            continue; 
          }
          if (taken[right]) {
            right--;
            continue;
          }
          int sum = plankSizes[left] + plankSizes[right];
          if (sum == ballroom[0]) {
            completed+=plankWidth;
            planksUsed+=2;
            left++;
            right--;
          }
          else if (sum < ballroom[0]) {
            left++;
          }
          else {
            right--;
          }
      }
      if (completed == ballroom[1]) neededForX = planksUsed;
      else neededForX = 0;

      // now y
      //zeroing
      completed = 0; planksUsed = 0; zeroe(taken, numberOfPlanks);

      for (int i = 0; i < numberOfPlanks && completed != ballroom[0]; i++) {
        if (plankSizes[i] == ballroom[1]) {
          completed+=plankWidth;
          planksUsed++;
          taken[i] = 1;
        }
      }
      left = 0, right = numberOfPlanks-1;
      while (left < right && completed != ballroom[0]) {
          if (taken[left]) { 
            left++; 
            continue; 
          }
          if (taken[right]) {
            right--;
            continue;
          }
          int sum = plankSizes[left] + plankSizes[right];
          if (sum == ballroom[1]) {
            completed+=plankWidth;
            planksUsed+=2;
            left++;
            right--;
          }
          else if (sum < ballroom[1]) {
            left++;
          }
          else {
            right--;
          }
      }
      if (completed == ballroom[0]) neededForY = planksUsed;
      else neededForY = 0;

      // in conclusion

      if (neededForX == 0 && neededForY == 0) {
        printf("impossivel\n");
      }
      else {
        if (neededForX == 0) neededForX = __INT_MAX__;
        if (neededForY == 0) neededForY = __INT_MAX__;
        if (neededForX <= neededForY) {
          printf("%d\n", neededForX);
        }
        if (neededForY < neededForX) {
          printf("%d\n", neededForY);
        }
      }
    }
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
  int t=*a; *a=*b; *b=t;
}