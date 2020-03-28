// Calculates the factorial of a positive number inputted by the user.

#include <stdio.h>

int factorial_sequential(int n);
int factorial_recursive(int n);

int main(void)
{
    unsigned int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The factorial of %d is %d\n", number, factorial_sequential(number));
}

// Find the factorial of a number.
int factorial_sequential(int number)
{
    int total;

    if (number == 0)
    {
        return 1;
    }

    total = number;
    for(int i = number - 1; i > 0; i--)
    {
        total *= i;
    }

    return total;
}

// Find the factorial of number recursively.
int factorial_recursive(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial_recursive(number - 1);
    }
}
