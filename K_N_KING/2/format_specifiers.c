/**********************************
* NAME:     format_specifiers.c   *
* PAGE NUM:                  34   *
* AUTHOR:               SWAROOP   *
***********************************/

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
