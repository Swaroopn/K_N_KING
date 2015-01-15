/* Numbers into Words */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,a;
    printf("Enter a two-digit number: ");
    scanf("%d",&n);
    if (n > 100){
        printf("Number is out of range!\n");
        exit(EXIT_SUCCESS);
    }
    if(n==100){
        printf("Hundered\n");
        exit(0);
    }
    else if(n==0){
        printf("Zero\n");
        exit(0);
    }
    else if(n>10 && n<20)
    {
        switch(n)
        {
            case 11: printf("Eleven\n");       break;
            case 12: printf("Twelve");         break;
            case 13: printf("Thirteen ");      break;
            case 14: printf("Fourteen");       break;
            case 15: printf("Fifteen ");       break;
            case 16: printf("Sixteen");        break;
            case 17: printf("Seventeen");      break;
            case 18: printf("Eighteen");       break;
            case 19: printf("Ninteen");        break;
        }
    }
    else
    {
        a = n/10;
        switch(a)
        {
            case 1: printf("Ten ");        break;
            case 2: printf("Twenty ");     break;
            case 3: printf("Thirty ");     break;
            case 4: printf("Fourty ");     break;
            case 5: printf("Fifty ");      break;
            case 6: printf("Sixty ");      break;
            case 7: printf("Seventy ");    break;
            case 8: printf("Eighty ");     break;
            case 9: printf("Ninty ");      break;
        }
        n = n%10;
        switch(n)
        {
            case 1: printf("One\n");        break;
            case 2: printf("Two\n");        break;
            case 3: printf("Three\n");      break;
            case 4: printf("Four\n");       break;
            case 5: printf("Five\n");       break;
            case 6: printf("Six\n");        break;
            case 7: printf("Seven\n");      break;
            case 8: printf("Eight\n");      break;
            case 9: printf("Nine\n");       break;
        }
    }
    printf("\n");

    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}

