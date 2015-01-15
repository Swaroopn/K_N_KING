/***********************
* NAME:      matrix.c  *
* PAGE NUM:        50  *
* AUTHOR      SWAROOP  *
************************/

#include <stdio.h>

int main(void)
{
    int ch[16], i,j, r1, r2, r3, r4, c1, c2, c3, c4, d, r, c;
	printf("Enter 4*4 matrix: \n");
    for (j = 0; j <16; j++)
    {
        scanf("%d", &ch[j]);
    }

    c1 = ch[0] + ch[4] + ch[8] + ch[12];
    c2 = ch[1] + ch[5] + ch[9] + ch[13];
    c3 = ch[2] + ch[6] + ch[10] + ch[14];
    c4 = ch[3] + ch[7] + ch[11] + ch[15];

    d = ch[0] + ch[5] + ch[10] + ch[15];

    r1 = ch[0] + ch[1] + ch[2] + ch[3];
    r2 = ch[4] + ch[5] + ch[6] + ch[7];
    r3 = ch[8] + ch[9] + ch[10] + ch[11];
    r4 = ch[12] + ch[13] + ch[14] + ch[15];

    printf("\nColumn-1 sum: %d\n", c1);
    printf("Column-2 sum: %d\n", c2);
    printf("Column-3 sum: %d\n", c3);
    printf("Column-4 sum: %d\n", c4);

    printf("\nRow-1 sum: %d\n", r1);
    printf("Row-2 sum: %d\n", r2);
    printf("Row-3 sum: %d\n", r3);
    printf("Row-4 sum: %d\n", r4);

    printf("\nDiagonal sum: %d\n", d);
	
	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
