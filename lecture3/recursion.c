#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
  int height = get_int("Height: ")
  draw(height);
}

void draw(int n)
{
  if (n<= 0)
  {
    return;
  }

  draw(n-1);

  for(int i =0; i < n; i++)
  {
    printf("#");
  }
  printf("\n");


  // 1 case 
  // for(int i = 0; i < n; i++)
  // {
  //     printf("#");
  // }
  //   printf("\n");
  //   // recursive call it's not a loop 
  //   draw(n + 1);
}