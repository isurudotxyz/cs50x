#include <stdio.h>

void merge_sort(int a[], int length);
// carry the recursive path of the function
void merge_sort_recursion(int a[], int l, int r);
// merge the 2 sorted portion of the array
void merge_sort_arrays(int a[], int l, int m, int r);
int main()
{
  int a[] = {9 , 4, 5, 2, 8, 7, 69, 3, 1, 0};
  int length = sizeof(a) / sizeof(a[0]);

  merge_sort(a,length);

  for (int i = 0; i < length; i++)
  {
    printf("%i", a[i]);
  }
  printf("\n");
  

  return 0;
}
void merge_sort(int a[], int length){
  merge_sort_recursion(a, 0, length -1);
}

void merge_sort_recursion(int a[], int l, int r)
{
  if( l < r)
  {
    int m = l + (r - l) / 2;

    merge_sort_recursion(a,l,m);
    merge_sort_recursion(a, m+1,r);

    merge_sort_arrays(a,l,m,r)
  }
};

void merge_sort_arrays(int a[], int l, int m, int r){
  int left_length = m - l + 1;
  int right_length = r - m;

  int tempo_left[left_length];
  int temp_right[right_length];
  int i, j, k;

  for ( int i = 0; i < right_length)
};
