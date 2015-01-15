/*********************************
 * PROGRAM NAME:    fizz_buzz.c  *
 * PAGE NUMBER:                  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int sum = 0, i;

    for (i = 1; i < argc; i++)
    {
        sum +=  atoi(argv[i]);	// to convert string to an integer
    }

    printf("Total Sum: %d\n", sum);

    return 0;
}

