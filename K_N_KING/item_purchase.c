/*****************************
* NAME:     item_purchase.c  *
* PAGE NUM:              50  *
* AUTHOR            SWAROOP  *
******************************/

#include <stdio.h>

int main(void)
{
    int item_num, mm=1, dd=1, yyyy=1;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm,&dd,&yyyy);

    printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-d\t\t$%5.2f\t\t%d/%d/%d", item_num, price, mm, dd, yyyy);

    return 0;
}
