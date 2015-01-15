/*************************************
 * PROGRAM NAME:  first_last_name_2.c  *
 * PAGE NUMBER:                 158  *
 * AUTHOR:                  SWAROOP  *
 *************************************/

#include <stdio.h>

int main(void)
{
    char first, last;
    int ch;

    printf("Enter a first and last name: ");
    scanf("%c%[a-zA-Z] ", &first, &last);

    while ((ch = getchar()) != '\n')
    {
        printf("%c", ch);
    }

    printf(" ,%c", first);

    return 0;
}
