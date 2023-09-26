#include <cs50.h>
#include <stdio.h>
//  can be applied only in unsorted list 
//  big o of 
//  omega of 1
// int check(int array[], int l,int r, int x);

int main (void)
{
  int n;
  do
  {
  n = get_int("Prompt user for a value between 1 and 50: ");
  } while (n > 1 && n < 50);

  int array [] = {1, 4, 6, 8, 14, 20, 32, 38, 40, 47, 48, 50};
  int length = sizeof(array) / sizeof(array[0]);
  int result = check(array, 0, length - 1, n);
  
  (result == -1) ? printf("Value not stored in the array\n") : printf("Value stored at index %i\n", result);

}
int check(int array[], int l,int r, int x)
{
  while (l <= r)
  {
    // mid point in the portion we at 
    int med = l + (r - 1) / 2 ;
    if (array[med] == x)
      return med;
    
    if(array[med] < x)
      l = med + 1;
      // using recursion
      // return check(a,l, med -1, x)
    else 
      r = med - 1;
      // using recursion
      // return check(a, med + 1, l, x)

  }
  return - 1;
}

