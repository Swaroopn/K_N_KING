/*******************************
 * PROGRAM NAME:  digit_pos.c  *
 * PAGE NUMBER:           214  *
 * AUTHOR:            SWAROOP  *
 *******************************/

#include <stdio.h>
#define SIZE 10

int len = 0;

int main(void)
{
    int number[SIZE];
    int pos, ch, j = 0;

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n')
        number[len++] = ch - 48;    // converting character to number

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos > len)
        printf("\nInvalid position!\n");
    else
        printf("\nThe number in that position: %d\n", number[len-pos]);


    return 0;
}


