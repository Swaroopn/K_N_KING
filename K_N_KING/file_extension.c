/*********************************
 * PROGRAM NAME:    extension.c  *
 * PAGE NUMBER:             389  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>
#include <string.h>

int ch, i = 0;
void censor(char str[]);

int main(void)
{
    char s[25], r[25];
    char *p, *q;

    p = s, q = r;

    while ((ch = getchar()) != '\n')
    {
        *p = ch;
        p++;
    }
    *p = '\0';
    p = s;
    while  (*p != '\0')
    {
        if (*p == '.')
            printf(" ");
        else
            putchar(*p);
        p++;
    }

    return 0;
}
