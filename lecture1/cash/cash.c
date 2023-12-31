#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{   

    // TODO
    int cent;
    do
    {
        cent = get_int("How many cents do I owe you?\n");
    } 
    while (cent < 0);
    
    return cent;
}   
// 25
int calculate_quarters(int cents)
{   
    //  removing 0 case 
    if (cents < 25)
    {
        return 0 ;
    }
    //  find how many 25 should the number return
    int number_of_coins = cents / 25;
    return number_of_coins;

}
// 10
int calculate_dimes(int cents)
{
    // TODO
    if (cents < 10)
    {
        return 0 ;
    }
    //  find how many 25 should the number return
    int number_of_coins = cents / 10;
    return number_of_coins;
}
// 5
int calculate_nickels(int cents)
{
    // TODO
    if (cents < 5)
    {
        return 0 ;
    }
    //  find how many 25 should the number return
    int number_of_coins = cents / 5;
    return number_of_coins;

}
// 1
int calculate_pennies(int cents)
{
    // TODO
    if (cents < 1)
    {
        return 0;
    }
    //  find how many 25 should the number return
    int number_of_coins = cents / 1;
    return number_of_coins;
    
}