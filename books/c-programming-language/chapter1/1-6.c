// 1-6: Verify the expression getchar() != EOF is 0 or 1

#include <stdio.h>

int main()
{
    // Outputs 0 if CTLR-D (on Mac), 1 otherwise.
    printf("getchar() != EOF evaluated is %d.\n", getchar() != EOF);

    return 0;
}