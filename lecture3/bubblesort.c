#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

// void swap(int* xp, int* yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
 
// // An optimized version of Bubble Sort
// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     bool swapped;
//     for (i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//                 swapped = true;
//             }
//         }
 
//         // If no two elements were swapped by inner loop,
//         // then break
//         if (swapped == false)
//             break;
//     }
// }
 
// // Function to print an array
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
// }
 
// // Driver program to test above functions
// int main()
// {
//     int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
void bubbleSort(int a[], int l);

int main (void)
{
  int a[] = {1, 3, 7, 9, 0, 2, 4, 5, 8, 6};
  int l = sizeof(a)/sizeof(a[0]);
  bubbleSort(a,l);

  for (int i = 0; i < l; i++)
  {
    printf("a[%i] = %i\n", i, a[i]);    
  }

}

void bubbleSort(int a[], int l)
{
int i;
bool swapped = false;
do
  { 
    swapped = false;
    for ( int j = 0; j < (l - 1 - i) ; j++ )
    {
      if(a[j] > a[j+1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j+1] = temp;
        swapped = true;
      }
    }
    i++;
  } while (swapped);
}