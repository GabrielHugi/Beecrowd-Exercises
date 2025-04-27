/* 
beecrowd ad-hoc exercise 1086
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
  printf("hi\n");
  return 0;
}
