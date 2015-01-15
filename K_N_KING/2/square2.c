/******************************
 * PROGRAM NAME:  squares.c   *
 * PAGE NUMBER:         102   *
 * AUTHOR:          SWAROOP   *
 ******************************/

#include <stdio.h>

int main(void)
{
    int n, i, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i<=n ;odd += 2)
    {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;// odd = 3 (initially)
    }

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
