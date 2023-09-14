#include <cs50.h>
#include <stdio.h>
int get_height(void);
void print_blocks(int n);
int main(void) 
{
    int size = get_height();
    print_blocks(size);

}
 
int get_height(void)
{
    int height;

    do
    {
        height = get_int("How long do you want the pyramid to be?");
    } 
    while (1 > height || height > 8);
    return height;
}

void print_blocks(int n)
{
    // i => rows
    for (int i = 0; i < n; i++)
    {
        for (int z = i + 1; z < n; z++)
        { 
            printf(" ");
        }
        // j => hashtag
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

