#include <cs50.h>
#include <stdio.h>

typedef struct 
{
  /* data */
  string name;
  int votes;
}
 candidate;

candidate get_candidate(string prompt);


int main(void)
{
  //  to store one candidate structure 
  // candidate president = get_candidate("Enter a candidate:");
  // printf("%s\n", president.name);
  // printf("%i\n", president.votes);

  // to create array 
  candidate candidate_array [ 3];
  for (int i = 0 ; i < 3 ; i++)
  {
    candidate_array[i]= get_candidate("Get candidate: ");
  }
}

candidate get_candidate(string prompt)
{
  printf("%s\n", prompt);
  
  candidate c;
  
  c.name = get_string("Enter a name: ");
  c.votes = get_int("Enter a number of votes: ");

  return c;
}
