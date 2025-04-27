/* beecrowd ad-hoc exercise 1086
   made by Gabriel Loureiro Amorim Hugi
*/

#include <stdio.h>

int main () {
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
  idk
  */  
  printf("hi\n");
  return 0;
}
