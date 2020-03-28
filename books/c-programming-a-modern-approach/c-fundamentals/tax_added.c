// Calculates the total of a bill with a tax percentage added.

#include <stdio.h>

int main()
{
    float cost, tax_percentage;

    printf("Enter the total cost: ");
    scanf("%f", &cost);

    printf("Enter tax percentage: ");
    scanf("%f", &tax_percentage);
    tax_percentage = tax_percentage / 100;

    printf("With tax added: %.2f\n", cost + (cost * tax_percentage));

    return 0;
}
