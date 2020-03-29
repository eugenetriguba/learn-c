// 1-4: Write a program to print the corresponding 
//      celsius to fahrenheit table

#include <stdio.h>

// Print Celsius-Fahrenheit table for 
// 0, 20, .., 300; floating point version.

int main()
{
    float fahrenheit, celsius;
    int lowerBound, upperBound, stepSize;
    
    lowerBound = 0;
    upperBound = 300;
    stepSize = 20;

    printf("%3s %6s\n", "Cel", "Fah");
    celsius = lowerBound;
    while (celsius <= upperBound)
    {
        fahrenheit = celsius * (9/5) + 32;
        printf("%3.0f %6.0f\n", celsius, fahrenheit);
        celsius += stepSize;
    }

    return 0;
}