/****************************
 * PROGRAM NAME:  grade.c   *
 * PAGE NUMBER:        97   *
 * AUTHOR:        SWAROOP   *
 ***************************/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a numerical grade: ");
    scanf("%d", &num);

    num = num / 10;

    switch (num)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("Letter grade: F\n");
                break;
        case 6: printf("Letter grade: D\n");
                break;
        case 7: printf("Letter grade: C\n");
                break;
        case 8: printf("Letter grade: B\n");
                break;
        case 9:
        case 10: printf("Letter grade: A\n");
                break;
        default: printf("WRONG INPUT!!\n");
                 break;
    }

	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
