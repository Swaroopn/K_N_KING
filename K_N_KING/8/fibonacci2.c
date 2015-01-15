/*******************************
 * PROGRAM NAME:  fibonacci.c  *
 * PAGE NUMBER:           158  *
 * AUTHOR:            SWAROOP  *
 *********************---*******/

#include <stdio.h>

#define SIZE 40

int main(void)
{
    int fib_numbers[SIZE], i;
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;

    for (i = 2; i < SIZE; i++)
    {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
        printf("%d\n", fib_numbers[i]);
    }

    return 0;
}
