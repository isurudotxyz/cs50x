#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    // argc => argument count 
    // argv  => array of argument
    // block program if arguments are not 2
    if (argc != 2) 
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        // block program input is not a number 
        if (!isdigit(argv[1][i]) && argv[1][i] > 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    string prompt = get_string("plaintext:  ");
    //  convert argv[1] as an integer
    int k = atoi(argv[1]);

    printf("ciphertext: ");
    for (int j = 0, n = strlen(prompt); j < n; j++)
    {
        if (isupper(prompt[j]))
        {
            printf("%c", (prompt[j] - 65 + k) % 26 + 65);
        } 
        else if (islower(prompt[j]))
        {
            printf("%c", (prompt[j] - 97 + k) % 26 + 97);
        } 
        else if (isblank(prompt[j]))
        {
            printf(" ");
        }
        else if (ispunct(prompt[j]))
        {
            printf("%c", prompt[j]);
        }
    }
    printf("\n");
}


