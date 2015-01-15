/***************************************
 * PROGRAM NAME:    reverse_pointer.c  *
 * PAGE NUMBER:                   275  *
 * AUTHOR:                    SWAROOP  *
 ***************************************/

#include <stdio.h>

#define SIZE 10

int main(void)
{
    char message[50], *p;
    int c, i = 0,j;
    p = &message[0];

    printf("Enter a message: ");
    while ((c = getchar()) != '\n')
    {
        *p = c;
        p++;
    }
    *p = '\0';
    printf("Reversal is: ");
    while(p >= &message[0])
        printf("%c", *p--);
    printf("\n");

    return 0;
}
