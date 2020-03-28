// Calculates the volume of a sphere.

#include <stdio.h>
#include <math.h>

int main()
{
    float radius;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf(
        "The volume of a sphere with radius %.2f is %.2f\n",
        radius, (4.0f / 3.0f) * M_PI * pow(radius, 3)
    );

    return 0;
}
