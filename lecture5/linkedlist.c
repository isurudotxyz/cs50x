#include <stdio.h>
#include <stdlib.h>

typedef struct  node
{
  int number;
  struct node *next;
} node;

int main(int argc ,char *argv[])
{
  // implementing a linked list of size 0 => head
  node *list = NULL;

  // first value is the name of the number so we get the second value using i = 1 ;
  for (int i = 1; i < argc; i++)
  {
    int number = atoi(argv[i]);

    node *n = malloc(sizeof(node));
    
    if (n == NULL)
    {
      
      return 1;
    }
    // update number field of the node 
    n->number = number;
    // addressing to next number => null arg
    n->next = NULL;

    n->next = list;
    list = n;

  }
  // temporary value that point every time at each node in the list 
 for(node *ptr = list ; ptr!=NULL; ptr = ptr-> next )
  {
    printf("%i\n", ptr->number);
    ptr = ptr-> next;
    ptr = list;
  }

  while (ptr != NULL)
  {
    // creating temporary pointer to allocate memory 
    node *next = ptr ->next;
    free(ptr);
    ptr = next;
  }
}
