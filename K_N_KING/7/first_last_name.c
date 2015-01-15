/*************************************
 * PROGRAM NAME:  first_last_name.c  *
 * PAGE NUMBER:                 158  *
 * AUTHOR:                  SWAROOP  *
 *************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[15], last[15];

    printf("Enter a first and last name: ");
    scanf("%s %s", first, last);

    printf("%s, %c.", last, first[0]);

    return 0;
}
