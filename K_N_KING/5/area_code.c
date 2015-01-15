/*****************************
 * NAME:       area_code.c   *
 * PAGE NUM:            95   *
 * AUTHOR:         SWAROOP   *
 *****************************/

#include <stdio.h>

int main(void)
{
    int area_code;

    printf("Enter the telephone area code. I will the corresponding city name: ");
    scanf("%d", &area_code);

    switch(area_code)
    {
        case 229: printf("Area: Albany\n");
                  break;
        case 404:
        case 470:
        case 678:
        case 770: printf("Area: Atlanta\n");
                  break;
        case 478: printf("Area: Macon\n");
                  break;
        case 706:
        case 762: printf("Area: Columbus\n");
                  break;
        case 912: printf("Area: Savannah\n");
                  break;
        default: printf("Area code not recognized!\n");
    }
    
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
