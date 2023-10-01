#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // v1
  // int n = 50;
  // int *p = &n;
  // // reveals the address of n ( '%p', &n)
  
  // printf("%p\n", p);
  
  // // print 50
  // printf("%i\n", *p); 
  
  // // v2
  // //  string 
  // char *s = "HI!";
  // // both prints the same exact location 
  // printf("%p\n", s);
  // printf("%p\n", &s[0]);

  // v3 
  char *v = "HI!";
  printf("%c\n", *v);
  printf("%c\n", *(v+1));
  printf("%c\n", *(v+2));

}

