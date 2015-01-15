/**************************
 * NAME:          octal.c *
 * PAGE NUM:        Q & A *
 * AUTHOR:        SWAROOP *
 **************************/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter a number between 0 and 32767. I will print its octal equivalent: \n");
    scanf("%d", &i);
    printf("OCTAL equivalent: %.5o", i);

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
