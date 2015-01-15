/***************************************
 * PROGRAM NAME:   compound_literal.c  *
 * PAGE NUMBER:                   201  *
 * AUTHOR:                    SWAROOP  *
 ***************************************/
 
#include <stdio.h>
#define SIZE 10

int sum_array(int [], int);

int main()
{
    int a[SIZE];
    int total;

    total = sum_array((int[]) {3,0,3,4,1}, 5);

    printf("Total Sum: %d\n", total);

    return 0;
}

int sum_array(int a[], int n){
    int sum = 0;
    while (--n >= 0){
        sum += a[n];
    }
    return sum;

}
