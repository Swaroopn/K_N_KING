/*******************************
 * PROGRAM NAME:  fibonacci.c  *
 * PAGE NUMBER:           177  *
 * AUTHOR:            SWAROOP  *
 *********************---*******/

#include <stdio.h>

int main(void)
{
    int i, n;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	int fib_numbers[n];
	fib_numbers[0] = 0;
    fib_numbers[1] = 1;
	
	printf("%d\n%d\n", fib_numbers[0], fib_numbers[1]);
	
    for (i = 2; i < n; i++)
    {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
        printf("%d\n", fib_numbers[i]);
    }

    return 0;
}
