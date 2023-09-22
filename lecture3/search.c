#include <cs50.h>
#include <stdio.h>
#include <string.h>

// in c to compare string use strcomp v 

int main(void) {
  // static array 
  // int number[] = {20, 500, 10 , 5, 100, 1, 50}
  // int number[7]
  // number[i] =;

  // in this 
  string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
  string s = get_string("String:\n");

  int n = get_int("Number: ");
  // linear search 
  for (int i= 0; i < 7; i++){
    // if (number[i] == n )
    // if (string[i] == s )
    //  in this case it won't work cause it won't compare every letter need to use 
    if(strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
      //  0 means success 

    }
    printf("Not found\n");
    return 1;
    //  1 or any other number means unsuccess 
  }
}