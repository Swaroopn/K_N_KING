/*********************************
 * PROGRAM NAME:   len_of_sen.c  *
 * PAGE NUMBER:             142  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

int main(main)
{
    int len = 0;

    while(getchar() != '\n')
        len++;

    printf("length: %d", len);

    return 0;
}
