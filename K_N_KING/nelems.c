/***********************************
 * PROGRAM NAME:         nelems.c  *
 * PAGE NUMBER:               345  *
 * AUTHOR:                SWAROOP  *
 ***********************************/

#include <stdio.h>

#define NELEM(a) printf("%d", sizeof(a)/ sizeof(a[0]))

int main(void)
{
    int a[10];

    NELEM(a);

    return 0;
}

