// Finds the collatz conjecture of a positive number inputted
// by the user. User input assumes a non-hostile environment.

#include <stdio.h>
#include <stdlib.h>

int collatz(int n);

int main(void)
{
    unsigned int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Collatz conjecture of %d is %d\n", number, collatz(number));
}

// Find collatz conjecture of n
int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}