/* 
beecrowd ad-hoc exercise 1086
made by Gabriel Loureiro Amorim Hugi
*/

#include <stdio.h>
//#include <windows.h>
#include <unistd.h>

/*
why my quicksort not working guys :( skull emoji
*/


// functions
void partitionArray(int* storage, int* array, int pivot, int min, int max) {
  // its return should be posMin-1 as for the end position of the smaller than array
  printf("sh p:%d min:%d max:%d\n", pivot, min, max);

  int posMin = min, posMax = max;
  int resArr[max+1];
  for (int i = min; i <= max; i++) {
    printf("%d - ", array[i]);
    if (array[i] <= pivot) {
      resArr[posMin] = array[i];
      posMin++;
    }
    else {
      resArr[posMax] = array[i];
      posMax--;
    }
  }
  printf("\nend\n");
  for (int i = min; i <= max; i++) {
    array[i] = resArr[i];
  }
  printf("There: pivot %d : posmin %d : posmax %d\n", pivot, posMin, posMax);
  printf("how the array be looking:\n");
  for (int i = 0; i < 11; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  sleep(1);

  storage[0] = min;
  storage[1] = posMin-1;
  storage[2] = max;
  //also return start
}

void quickSort(int* array, int len, int min, int max) {
  printf("Here: len %d : min %d : max %d\n", len, min, max);
  sleep(1);
  if (len <= 1) return;
  int pivot = (int)(len/2); // middle-ish
  int info[3];
  partitionArray(info, array, pivot, min, max); // info = end position of small array
  printf("Return of be like: %d, %d, %d\n", info[0], info[1], info[2]);
  // with just the position of where posMin ends we should about be able to determine the rest
  quickSort(array, info[1], info[0], info[1]); // smaller
  quickSort(array, len-info[1], info[1]+1, info[2]); // bigger
}

int main () {

  /*
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
  */


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
  int test[11] = {5, 6, 2, 0, 62, 5, 402, 64, 1, 5, 7}; 
  quickSort(test, 11, 0, 10);
  for (int i = 0; i < 11; i++) {
    printf("%d, ", test[i]);
  }
  printf("\n");
  return 0;
}
