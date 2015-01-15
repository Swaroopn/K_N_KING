/*********************************
 * PROGRAM NAME:   count_down.c  *
 * PAGE NUMBER:             186  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

void print_count(int);	// Prototype

int main(void)
{
    int i;

    for (i = 10; i > 0; i--)
        print_count(i);

    return 0;
}

void print_count(int n)
{
    printf("T minus %d and counting\n", n);
}
