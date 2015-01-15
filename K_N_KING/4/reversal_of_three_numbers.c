/**************************
 * NAME:       reversal.c *
 * PAGE NUM:           71 *
 * AUTHOR:        SWAROOP *
 **************************/

#include <stdio.h>

int main(void)
{
    int i, j, h, k;

    printf("Enter a three-digit number: ");
    scanf("%d", &i); // 123


    j = i / 100; // 1
    i %= 100; 	 // 23
    k = i / 10;  // 2
    i = i % 10;  // 3

    printf("The reversal is: %d%d%d\n", i, k, j);
	
	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
