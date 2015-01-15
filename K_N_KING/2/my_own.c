/**********************
* NAME:      star.c   *
* PAGE NUM:      20   *
* AUTHOR:   SWAROOP   *
***********************/

#include <stdio.h>

int main(void)
{
    int i, j;

    for (j=7;j!=0;j--)
    {
        for (i=0;i!=8;i++ )
        {
            if (i == j)
            {
                printf("*\n");
                break;
            }
            else
            {
                printf(" ");
            }
        }
    }

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

