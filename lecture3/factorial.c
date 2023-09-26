#include <cs50.h>
#include <stdio.h>

// recreate a factorial expression using recursion 
int factorial (int number);
int main(void)
{
  int number_to_factor = get_int("Enter value: ");
  printf("%i\n",factorial(number_to_factor));
 
}

int factorial (int number)
{
  if (number == 1)
  {
    return 1;
  } 
  // recursive approach

  // return number * factorial(number - 1);

  //  iteration approach 
  int solution = number; 
  for ( int i = number - 1; i>0; i--)
  {
    solution = solution * i ;
  }
  // say number is 3 
  // 1 step 
  //  solution = 3 * 2
  // solution = 6 * 1 

  return solution;
}