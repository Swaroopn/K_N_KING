/******************************
* NAME:     vol_of_sphere.c   *
* PAGE NUM:              34   *
* AUTHOR:           SWAROOP   *
*******************************/

#include <stdio.h>

#define PI 3.142856
#define VOLUME(r) return ((4.0f/3.0f) * PI * r * r* r)
int main(void)
{
    int radius;
    float volume;
    printf("******************\n");
    printf("VOLUME OF A SPHERE\n");
    printf("******************\n");
    printf("Enter value of radius: ");
    scanf("%d", &radius);



    printf("\nVolume of a sphere: %f\n", VOLUME(radius));

    return 0;
}

