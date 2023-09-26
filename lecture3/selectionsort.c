#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) 
{
  int array[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
  int l = sizeof(array)/sizeof(array[0]);

  for ( int i = 0; i < l -1 ; i++)
  {
    //  supposing min num is at the current index 
    int min = i;
    for(int j = i + 1; j< l; j++)
    {
      if(array[j] < array[min])
      {
        min = j;
      }
    }
      if( min != i)
      {
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
      }
  }
  for (int i = 0; i< l; i++)
  {
    printf("a[%i] =  %i\n", i , array[i]);
  }

  return 0;
}