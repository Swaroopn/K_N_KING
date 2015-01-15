/**********************************************************
 * PROGRAM NAME:  repeated_digit_modified_using_switch.c  *
 * PAGE NUMBER:                                     158   *
 * AUTHOR:                                      SWAROOP   *
 **********************************************************/

#include <stdio.h>
#include <stdbool.h> /* C99 only */

#define SIZE 10

int main(void)
{
    int count[SIZE] = { 0 }, i;
    long n;

    printf("Enter a number: ");
    scanf("%lu", &n);
    printf("%0ld ", n);
    while (n > 0)
    {
    	
        switch (n % 10)
        {        	
            case 1: count[1]++;
                    break;

            case 2: count[2]++;
                    break;

            case 3: count[3]++;
                    break;

            case 4: count[4]++;
                    break;

            case 5: count[5]++;
                    break;

            case 6: count[6]++;
                    break;

            case 7: count[7]++;
                    break;

            case 8: count[8]++;
                    break;

            case 9: count[9]++;
                    break;

            default: count[0]++;
        }
        n /= 10;
    }
    printf("\nDigit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    printf("Occurence:\t");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", count[i]);
    }
    printf("\n");
    
    return 0;
}
