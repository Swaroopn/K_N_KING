/***************************
 * NAME:      telephone.c  *
 * PAGE NUM:           50  *
 * AUTHOR         SWAROOP  *
 ***************************/

#include <stdio.h>

int main(void)
{
    int xxx, xxx2, xxxx;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &xxx, &xxx2, &xxxx);
    printf("You entered: %d.%d.%d", xxx, xxx2, xxxx);
    
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
