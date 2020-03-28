// Calculate the smallest number of $20, $10, $5, and $1 bills
// needed for a given dollar amount.

#include <stdio.h>

int main()
{
    int dollar_amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    twenties = dollar_amount / 20;
    dollar_amount %= 20;

    tens = dollar_amount / 10;
    dollar_amount %= 10;

    fives = dollar_amount / 5;
    dollar_amount %= 5;

    ones = dollar_amount;

    printf("%d bills: %d\n", 20, twenties);
    printf("%d bills: %d\n", 10, tens);
    printf("%d bills: %d\n", 5, fives);
    printf("%d bills: %d\n", 1, ones);
}

