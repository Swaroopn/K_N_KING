/***************************
 * PROGRAM NAME:  bliff.c  *
 * PAGE NUMBER:       158  *
 * AUTHOR:        SWAROOP  *
 ***************************/

#include <stdio.h>

int main(void)
{
    char msg[50];
    int ch, i = 0, j;

    printf("Enter the message: ");
    while((ch = getchar()) != '\n')
    {
        msg[i++] = toupper(ch);
    }

    j = i + 10 -1;

    for (;i <= j; i++)
    {
        msg[i] = '!';
    }

    msg[i] = '\0';
    i = 0;

    while (msg[i] != '\0')
    {
        switch(msg[i])
        {
            case 'A': msg[i] = '4';
                      break;
            case 'B': msg[i] = '8';
                      break;
            case 'E': msg[i] = '3';
                      break;
            case 'I': msg[i] = '1';
                      break;
            case 'O': msg[i] = '0';
                      break;
            case 'S': msg[i] = '5';
                      break;
            default: msg[i] = msg[i];
        }
        i++;
    }

    for (i = 0; msg[i] != '\0'; i++)
        printf("%c", msg[i]);
	printf("\n");
	
    return 0;
}
