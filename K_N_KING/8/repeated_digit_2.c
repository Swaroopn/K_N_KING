/************************************
 * PROGRAM NAME:  repeated_digit.c  *
 * PAGE NUMBER:                158  *
 * AUTHOR:                 SWAROOP  *
 ************************************/

#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void)
{
    bool digit_seen[10] = {false}; // initializes only first ele and all elements will be zero automatically
    int digit;
    long num, n;

    printf("(less than or equal to 0 to terminate) \n\n");
    do
    {
        printf("Enter a number: ");
        scanf("%ld", &num);
        if (num <= 0)
        	return;
        n = num;

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
        
        for(n = 0; n < 10; n++)
			digit_seen[n] = 0;
    } while (num > 0);

    return 0;
}
