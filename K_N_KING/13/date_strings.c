/*****************************************
 * PROGRAM NAME:         date_strings.c  *
 * PAGE NUMBER:                     313  *
 * AUTHOR:                      SWAROOP  *
 *****************************************/

#include <stdio.h>

int main(void)
{
    int mm, dd, yyyy;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    switch(mm)
    {
        case 1: printf("January ");
                break;
        case 2: printf("February ");
                break;
        case 3: printf("March ");
                break;
        case 4: printf("April");
                break;
        case 5: printf("May ");
                break;
        case 6: printf("June ");
                break;
        case 7: printf("July ");
                break;
        case 8: printf("August ");
                break;
        case 9: printf("September ");
                break;
        case 10: printf("October ");
                break;
        case 11: printf("November ");
                break;
        case 12: printf("December ");
                break;
        default: printf("Invalid!");
                 return;
    }

    printf("%2d, %d\n", dd, yyyy);

    return 0;
}
