/******************************
 * PROGRAM NAME:    censor.c  *
 * PAGE NUMBER:          389  *
 * AUTHOR:           SWAROOP  *
 ******************************/

#include <stdio.h>
#include <string.h>

int ch, i = 0;
void censor(char str[]);

int main(void)
{
    char str[25];

    censor(str);
	printf("\n");
	
    return 0;
}

void censor(char str[])
{
    while ((ch = getchar()) != '\n')
    {
        if (ch == 'f' || ch == 'o')
            ch = 'x';
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    i = 0;
    while (str[i] != '\0')
        printf("%c", str[i++]);
}
