/************************************
 * PROGRAM NAME:  repeated_digit.c  *
 * PAGE NUMBER:                166  *
 * AUTHOR:                 SWAROOP  *
 ************************************/

#include <stdio.h>
#include <stdbool.h> /* C99 only */

#define SIZE 10
int main(void)
{
    bool digit_seen[SIZE] = {false}; // initializes only first ele and all elements will be zero automatically
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Repeated digit.\n");
    else
        printf("No Repeated digit.\n");

    return 0;
}
