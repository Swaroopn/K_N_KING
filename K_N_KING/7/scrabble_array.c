/*****************************************
 * PROGRAM NAME:   scrabble_crossword.c  *
 * PAGE NUMBER:                     157  *
 * AUTHOR:                      SWAROOP  *
 *****************************************/

#include <stdio.h>

#define SIZE 26

int main(void)
{
    int ch, sum = 0, i = 0;
    char scrabble[SIZE] = {0};

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':   scrabble[i] = 1;
                        sum += 1;
                        break;
            case 'D':
            case 'G':   scrabble[i] = 2;
                        sum += 2;
                        break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':   scrabble[i] = 3;
                        sum += 3;
                        break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':   scrabble[i] = 4;
                        sum += 4;
                        break;
            case 'K':   scrabble[i] = 5;
                        sum += 5;
                        break;
            case 'J':
            case 'X':   scrabble[i] = 8;
                        sum += 8;
                        break;
            case 'Q':
            case 'Z':   scrabble[i] = 10;
                        sum += 10;
                        break;
            default:    scrabble[i] = 0;
                        sum += 0;
                        break;
        }
        i++;
    }

    printf("Scrabble value: %d\n", sum);

    for (i = 0; i < SIZE; i++)
        printf("%d ", scrabble[i]);
	printf("\n");
	
    return 0;
}
