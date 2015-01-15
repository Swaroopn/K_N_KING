/*****************************************
 * PROGRAM NAME:   scrabble_crossword.c  *
 * PAGE NUMBER:                     312  *
 * AUTHOR:                      SWAROOP  *
 *****************************************/

#include <stdio.h>

int compute_scrabble_value(const char *word);


int main(void)
{
    char word[25], *p;
    int ch, sum;

     p = &word[0];

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        *p = toupper(ch);
        p++;
    }
    *p = '\0';

    sum = compute_scrabble_value(word);

    printf("Scrabble value: %d", sum);
    return 0;
}

int compute_scrabble_value(const char *word)
{
    int sum = 0;

    while (*word)
    {
        switch (*word++)
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
            case 'U': sum += 1;
                      break;
            case 'D':
            case 'G': sum += 2;
                      break;
            case 'B':
            case 'C':
            case 'M':
            case 'P': sum += 3;
                      break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y': sum += 4;
                      break;
            case 'K': sum += 5;
                      break;
            case 'J':
            case 'X': sum += 8;
                      break;
            case 'Q':
            case 'Z': sum += 10;
                      break;
            default: sum += 0;
        }
    }
    return sum;
}
