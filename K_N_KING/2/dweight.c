/************************
* NAME:     dweight.c   *
* PAGE NUM:        20   *
* AUTHOR:     SWAROOP   *
*************************/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("\nDimensional weights (pounds): %d\n", weight);
    printf("Volume (cubic inches): %d\n", volume);

    /* THE ABOVE STATEMENT CAN ALSO BE WRITTEN AS
    printf("Volume (cubic inches): %d\n", length * width * height); */
    printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);

    return 0;
}
