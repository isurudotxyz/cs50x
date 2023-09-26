#include <cs50.h>
#include <stdio.h>
int check(int n, int array [], int l);
// can be applied in unsorted list 
// big o of n 
// omega of 1

int main(void)
{
  int n = get_int("Check if you guess any number? ");
  int array[] = {5, 10, 60 , 32, 65, 34, 80, 96};
  int length = sizeof(array)/ sizeof(array[0]);

  int result = check(n,array,length);
  ( result == -1) 
    ? printf("Value not stored\n") 
    : printf("Value stored at index %i\n", result + 1);
}

int check (int n, int numbers[], int l)
{
  for (int i = 0 ; i < l ; i++ )
  {
    if(numbers[i] == n)
    {
      return i ;
      // returning index 
    }
  }
  return - 1 ;
}

