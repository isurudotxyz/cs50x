#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_long("x: ");
    int y = get_long("y: ");

    // printf("%li\n",  x + y );

    float z = (float) x / (float) y;
    printf("%.20f\n", z );
}
