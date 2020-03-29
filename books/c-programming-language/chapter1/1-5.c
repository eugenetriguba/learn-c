// 1-5: Modify the temperature conversion program to 
//      print the table in reverse order, that is, 
//      from 300 degrees to 0.

#include <stdio.h>

// Print Celsius-Fahrenheit table for 
// 300, 280, .., 0; floating point version.

int main()
{
    float fahrenheit, celsius;
    int lowerBound, upperBound, stepSize;
    
    lowerBound = 0;
    upperBound = 300;
    stepSize = 20;

    printf("%3s %6s\n", "Cel", "Fah");
    celsius = upperBound;
    while (celsius >= lowerBound)
    {
        fahrenheit = celsius * (9/5) + 32;
        printf("%3.0f %6.0f\n", celsius, fahrenheit);
        celsius -= stepSize;
    }

    return 0;
}