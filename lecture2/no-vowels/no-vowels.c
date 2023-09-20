// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <string.h>
#include <stdio.h>

string replace(string input);

int main(int argc, string argv[])
{
  if(argc != 2)
  {
    return 1 ;
  }
  printf("%s\n", replace(argv[1]));
}

string replace(string input)
{
  string name = input;
  for(int i = 0, n = strlen(input); i < n; i++){
    switch (input[i])
    {
    case 'a':
      name[i]= '6';
      break;
    case 'e':
      name[i]= '3';
      break;
    case 'i':
      name[i]= '1';
      break;
    case 'o':
      name[i]= '0';
      break;
  
    default:
      break;
    }
  }
   return name;
}