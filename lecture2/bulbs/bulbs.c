#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    // prompt text
    string promptUser = get_string("Message: ");
    int promptDecimal = 0;

    // turn text into decimal number
    for (int i = 0, n = strlen(promptUser) ; i < n ; i++)
    {
        // turn text into asci code
        promptDecimal = promptUser[i];
        int binary[] = {0, 0, 0, 0, 0, 0, 0, 0};
        for (int j = 0 ; promptDecimal > 0; j++)
        {
            // turn asci code into binary
            binary[j] = promptDecimal % 2;
            promptDecimal = promptDecimal / 2;
        }
        for (int k = BITS_IN_BYTE - 1; k >= 0; k --)
        {
            print_bulb(binary[k]);
        } 
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
