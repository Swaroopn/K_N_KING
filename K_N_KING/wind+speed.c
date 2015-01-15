/***************************
 * NAME: 	  wind_speed.c *
 * PAGE NUM: 		   96  *
 * AUTHOR:  	  SWAROOP  *
 **************************/ 
 
 #include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a wind speed (in knots): ");
    scanf("%d",&n);

    if(n<1)
    {
        printf("Calm.....\n");
        exit(0);
    }
    else if(n>=1 && n <=3)
    {
        printf("Light air..\n");
        exit(0);
    }
    else if(n>=4 && n <=27)
    {
        printf("$$$$ Breeze $$$$..\n");
        exit(0);
    }
    else if(n>=28 && n <=47)
    {
        printf("@@@ Gale @@@@\n");
        exit(0);
    }
    else if(n>=48 && n <=63)
    {
        printf("*** Storm ***\n");
        exit(0);
    }
    else if(n>63)
    {
        printf("Hurricane!!!!!!!\n");
        exit(0);
    }
    return 0;
}
