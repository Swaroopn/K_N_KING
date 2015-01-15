/*******************************
 * PROGRAM NAME:   toupper.c   *
 * PAGE NUMBER:          139   *
 * AUTHOR:           SWAROOP   *
 *******************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name[20];
    char *ptr = name;

    printf("Enter a string: ");
    scanf("%s", name);

    while (*ptr)
    {
        printf("%c", toupper(*ptr++));
    }

    return 0;
}
