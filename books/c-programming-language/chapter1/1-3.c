// 1-3: Modify the temperature conversion program to print a heading above the table

#include <stdio.h>

// Print Fahrenheit-Celsius table
// for 0, 20, .., 300; floating point version.

int main()
{
    float fahrenheit, celsius;
    int lowerBound, upperBound, stepSize;
    
    lowerBound = 0;
    upperBound = 300;
    stepSize = 20;

    printf("%3s %6s\n", "Fah", "Cel");
    fahrenheit = lowerBound;
    while (fahrenheit <= upperBound)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit += stepSize;
    }

    return 0;
}