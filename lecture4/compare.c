#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string s = get_string("s:");
  string t = get_string("t:");

  if(s == t)
  {
    printf("Same\n");
  }
  else
  {
    printf("Different\n");
  }
// s and t are always different 
// as we are comparing two different location m

}