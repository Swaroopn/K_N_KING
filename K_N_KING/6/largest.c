/*********************************
 * PROGRAM NAME:     largest.c   *
 * PAGE NUMBER:            122   *
 * AUTHOR:             SWAROOP   *
 *********************************/

#include <stdio.h>

int main(void)
 {
    float n, largest;

    printf("Enter a number (0 to terminate): ");
    scanf("%f", &n);

    largest = n;

    while (n > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n > largest)
            largest = n;
    }

    printf("\nThe largest number entered was %.2f\n", largest);

    return 0;
}
