/***************************************
 * PROGRAM NAME:  8 * 8 chess_board.c  *
 * PAGE NUMBER:                   173  *
 * AUTHOR:                    SWAROOP  *
 ***************************************/

#include <stdio.h>

#define ROWS 8
#define COLS 8

int main(void)
{
    char matrix[ROWS][COLS] = {'0'};
    int i, j;

    for (i = 0;i < ROWS; i++)
    {
        for (j = 0;j < COLS; j++)
        {
            if ((i+j) % 2)
                matrix[i][j] = 'R';
            else
                matrix[i][j] = 'B';
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

/*
    for (i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}
