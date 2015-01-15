/*********************************************
 * PROGRAM NAME:  repeated_digit_modified.c  *
 * PAGE NUMBER:                         158  *
 * AUTHOR:                          SWAROOP  *
 *********************************************/

#include <stdio.h>
#include <stdbool.h> /* C99 only */

#define SIZE 10

int main(void)
{
    bool digit_seen[SIZE] = { false }; // initializes only first ele and all elements will be zero automatically
    bool repeated_digit[SIZE] = {false};
    int digit, i = 0, j = 0;
    unsigned long long n;

    printf("Enter a number: ");
    scanf("%llu", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit_seen[digit])
        {
            if (repeated_digit[digit])
                ;
            else
            {
                repeated_digit[digit] = true;
                printf("%d ", digit);
                i++;
            }
        }
        else
            digit_seen[digit] = true;

        n /= 10;
    }

    if (!i)
        printf("No repeated digits!\n");

    return 0;
}

