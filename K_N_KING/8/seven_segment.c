/*************************************************
 * PROGRAM NAME:                seven_segment.c  *
 * PAGE NUMBER:                             177  *
 * AUTHOR:         						swaroop  *
 *************************************************/
/* ONLY FOR TWO DIGITS */

#include <stdio.h>
#include <math.h>

int main()
{

    int num, digit, x;

    printf("Enter a number: ");
    scanf("%d", &num);  // 10
	
	if (num % 10 == num)
		printf(" __\n|  |\n|  |\n __\n");
		
    x = num % 10;  // 0
    num = num / 10;  // 1
    num = (x * 10) + num;  // 1

    while(num > 0)
    {
        digit = num % 10;

        switch(digit)
        {

            case 1:    printf("|\n|\n"); //1
                        break;

            case 2:    printf(" __\n __|\n|__\n"); // 2
                        break;

            case 3:    printf("  __\n  __|\n  __|\n"); //3
                        break;

            case 4:    printf("|__|\n   |\n");    // 4
                        break;

            case 5:    printf(" __\n|__\n __|\n"); //5
                        break;

            case 6:    printf(" _\n|__\n|__|\n"); //6
                        break;

            case 7:    printf("__\n  |\n  |\n");//7
                        break;

            case 8:    printf(" __  \n|__|\n|__|\n");//8
                        break;

            case 9:    printf(" __\n|__|\n __|\n");//9
                        break;

        }

        num = num / 10;

    }

	/* for single digit */
    if (x == 0)
    {
        printf(" __\n|  |\n|  |\n __\n");
    }

    return 0;
}
