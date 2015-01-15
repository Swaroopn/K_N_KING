/******************************
 * NAME:          calendar.c  *
 * PAGE NUM:             123  *
 * AUTHOR:           SWAROOP  *
 ******************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int choice, n, i=1, j=1;
	
	printf("1-SUN 2-MON 3-TUE 4-WED 5-THU 6-FRI 7-SAT\n");
    printf("Enter number of days: ");
    scanf("%d", &n);

    if (n > 31)
    {
        printf("INVALID NUMBER!\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter starting day of the week: ");
    scanf("%d", &choice);

    printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
    switch (choice)
    {
        case 2: printf("\t");
                choice = 7;
                break;
        case 3: printf("\t\t");
                choice = 6;
                break;
        case 4: printf("\t\t\t");
                choice = 5;
                break;
        case 5: printf("\t\t\t\t");
                choice = 4;
                break;
        case 6: printf("\t\t\t\t\t");
                choice = 3;
                break;
        case 7: printf("\t\t\t\t\t\t");
                choice = 2;
                break;
        default: printf(" ");
                choice = 8;
                break;
    }

    while (i != choice)
    {
        printf("%d\t", i++);
    }
    printf("\n");

    while (i <= n)
    {
        if (j % 8 == 0)
        {
            printf("\n");
            j = 0;
        }
        else
            printf("%d\t", i++);
        j++;
    }
	printf("\n");
	
    return 0;
}
