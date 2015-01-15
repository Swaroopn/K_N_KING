/**********************
* NAME:     ascii.c   *
* PAGE NUM:           *
* AUTHOR    SWAROOP   *
***********************/

#include <stdio.h>

int main(void)
{
    char *ptr;
    char c[52]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    c[52] = '\0';
    int i;
    ptr = c;
    while(*ptr)
    {
        printf("%c - %d\n",*ptr, *ptr);
        ptr++;
    }
    printf("\n*****************************************\n");
    for (i = 0; i != 128; i++)
    {
        printf("%c - %d\n", i, i);
    }

    return 0;
}
