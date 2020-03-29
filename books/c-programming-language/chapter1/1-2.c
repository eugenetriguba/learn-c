#include <stdio.h>

int main()
{
    // Compilation error: unknown escape sequence
    printf("\c");

    return 0;
}