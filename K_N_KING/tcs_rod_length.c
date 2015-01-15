/*****************************
 * NAME:    TCS_ROD_LENGTH.C *
 * AUTHOR:  SWAROOP NAGENDRA *
 ****************************/

#include <stdio.h>

int main(void)
{
    float rods[10] = {0};
    int n, i, j, k;

    printf("Enter num of rods: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f", &rods[i]);
    }

    /*** SORT THE GIVEN ARRAY ***/

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (rods[i] > rods[j])
            {
                k = rods[i];
                rods[i] = rods[j];
                rods[j] = k;
            }
        }
    }

    /*** PRINT THE SORTED ARRAY ***/

    printf("\nThe Sorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%.f ", rods[i]);
    }

    printf("\n\nRequired Rods(in ascending order) :\n");

    for (i = 0; i < n-3; i++)
    {
        for (j = i+1; j < n-1; j++)
        {
            for (k = j+1; k < n; k++)
            {
                //printf("%f %f %f\n", i, j, k);

                if (((rods[i] + rods[j] + rods[k]) / 3) == rods[j])
                {
                    printf("%.f %.f %.f\n", rods[i], rods[j], rods[k]);
                }
            }
        }
    }

    return 0;
}
