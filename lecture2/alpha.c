#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string word = get_string("Word: ");
    for (int i = 0, n = strlen(word) - 1; i < n; i++)
    {
      if (word[i]> word[i+1])
      {
        printf('No\n');
        return 0;
      } 
    }
    printf("Yes\n");
    return 0;
}