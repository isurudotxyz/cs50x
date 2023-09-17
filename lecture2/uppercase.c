#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string s = get_string("Before: ");
  for(int i = 0,n = strlen(s); i < n; i++)
  {
    if(islower(s))
    {
      // printf("%i\n",s[i] - 32);
      printf("%c\n",toupper(s[i]));
    } 
    // else 
    // {
    //   printf("%c",s[i]);
    // }
  }
  printf("\n");
}


