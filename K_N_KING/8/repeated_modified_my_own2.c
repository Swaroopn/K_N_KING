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
    int repeated_digit[SIZE];
    int digit, i = 0, j = 0;
    unsigned long long n;

    printf("Enter a number: ");
    scanf("%llu", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            if ((j < i) && (repeated_digit[j] == digit))
                break;
            else
                repeated_digit[i++] = digit;
        }
        else
        {
            digit_seen[digit] = true;
        }
        n /= 10;
    }

    if (i == 0)
    {
        printf("No repeated digits\n");
        return 0;
    }

    printf("Repeated digits: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d ", repeated_digit[j]);
    }
    printf("\n");

    return 0;
}
