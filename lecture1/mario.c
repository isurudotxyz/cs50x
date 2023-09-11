#include <stdio.h>
#include <cs50.h>

void print_grid(int size);
int get_size(void);

int main(void) 
{
  /*
  3 question marks vertically 
  for (int i = 0; i < 4; i++){
  printf("???");
  }
  printf("\n");
  3 bricks horizontally   
  for (int i = 0;i < 3; i++){
  printf("#");
  } 
  */
  
  //  nxn grid brick 
    // get size of grid 
    int n = get_size() ;
    // print grid of bricks 
    print_grid(n)

}


















int get_size(void)
{
    int n 
    do
    {
      n = get_int("Size: ");
    }
    while (n < 1);
    return n; 

}

void print_grid(int size)
    for (int j = 0; j < n; j++)
    {
      
        for (int i = 0;i < n; i++)
        {
          printf("#");
        }
        printf("\n");
    }
{

}