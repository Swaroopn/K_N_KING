/******************************
 * NAME:          calendar.c  *
 * PAGE NUM:             123  *
 * AUTHOR:           SWAROOP  *
 ******************************/
/* 2013 CALENDAR */

#include <stdio.h>

int main(void)
{
    int choice, n, i=1, j=1, m, k, days;

    //printf("1-Sunday 2-Monday 3-Tuesday 4-Wednesday 5-Thursday 6-Friday 7-Saturday\n");

    //printf("Enter number of days: ");
    //scanf("%d", &n);
/*
    if (m > 12)
    {
        printf("INVALID NUMBER!");
        exit(1);
    }*/

    printf("Enter the month: ");
    scanf("%d", &choice);

printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
    switch (choice)//2013
    {
        case 1: days = 31;
                choice = 5;
                printf("\t\t");
                break;
        case 2: days = 59;choice = 2;
                printf("\t\t\t\t\t");
                break;
        case 3: days = 90;choice = 2;
                printf("\t\t\t\t\t");
                break;
        case 4: days = 120;choice = 6;
                printf("");
                break;
        case 5: days = 151;choice = 4;
                printf("\t\t\t");
                break;
        case 6: days = 181;choice = 1;
                printf("\t\t\t\t\t\t");
                break;
        case 7: days = 212;choice = 6;
                printf("");
                break;
        case 8: days = 243;choice = 3;
                printf("\t\t\t\t");
                break;
        case 9: days = 273;choice = 0;
                printf("\t\t\t\t\t\t\t");
                break;
        case 10: days = 304;choice = 5;
                printf("\t\t");
                break;
        case 11: days = 334;choice = 2;
                printf("\t\t\t\t\t");
                break;
        case 12: days = 365;choice = 0;
                printf("\t\t\t\t\t\t\t");
                break;
    }


    while (i <= choice)
        {
            printf("%d\t", i++);
        }
    printf("\n");


    while (i <= days)
    {
        k = i;
        if (( k > 31) || (k > 30) || (k > 28))
        {

            k = 1;
            printf("\n");
        }

            if (( j % 8 == 0))
            {
                printf("\n");
                j = 0;
            }
            else
                printf("%d\t", i++);
                j++;
     }

     printf("\n\n");
	

    return 0;
}
