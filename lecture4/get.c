#include <stdio.h>

int main(void)
{
  // get int
  int x;
  printf ("x: ");
  scanf("%i", &x);
  printf("x: %i\n", x);

  // get string 
  char s[4];
  printf("s: ");
  scanf("%s", &s);
  printf("s: %s\n", s);

}