/*********************************
 * PROGRAM NAME:   Dictionary.c  *
 * PAGE NUMBER:             157  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

int main(void)
{
    int ch;
    printf("Enter a phone number: ");
    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A':
            case 'B':
            case 'C': printf("2");
                      break;
            case 'D':
            case 'E':
            case 'F': printf("3");
                      break;
            case 'G':
            case 'H':
            case 'I': printf("4");
                      break;
            case 'J':
            case 'K':
            case 'L': printf("5");
                      break;
            case 'M':
            case 'N':
            case 'O': printf("6");
                      break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S': printf("7");
                      break;
            case 'T':
            case 'U':
            case 'V': printf("8");
                      break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z': printf("9");
                      break;
            default: printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
