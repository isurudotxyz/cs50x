#include <cs50.h>
#include <stdio.h>

//  create element that is x2 the previous one 
int main(void)
{
  int length;
  do
  {
    length = get_int("Length: ");
  }
  while (length < 1);
  int array[length];
  array[0] = 1;
  printf("%i",array[0]);
  for(int i = 1; i < length; i++){
    array[i] =  array[i - 1] * 2 ;
    printf("%i\n",array[i]);
  }

}