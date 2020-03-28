// Euclid's Algorithm: Reduce a given fraction to its lowest terms.
//
// This can be done by finding the greatest common divisor (gcd): the
// largest integer that will divide both numerator and denominator. of
// the numerator and denominator. A fraction is then reduced to its lowest
// terms by dividing both the numerator and denominator by their gcd.
//
// Algorithm: If u is greater than v, then the greatest common divisor of
// u and v is the same as the greatest common divisor of v and u - v.

#include <stdio.h>

int gcd(int u, int v)
{
    int temp;

    while (u > 0)
    {
        if (u < v)
        {
            temp = u;
            u = v;
            v = temp;
        }
        u = u % v;
    }

    return v;
}

int main()
{
    int x, y;

    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x > 0 && y > 0)
        {
            printf("%d %d %d\n", x, y, gcd(x, y));
        }
        else
        {
            printf("Usage: %%d %%d\n");
        }
    }

    return 0;
}

