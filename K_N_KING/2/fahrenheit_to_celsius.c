/****************************
 * NAME:     fah_to_cel.c   *
 * PAGE NUM:        20      *
 * AUTHOR:     SWAROOP      *
 ****************************/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
#define P printf

int main(void)
{
    float fahrenheit, celsius;

    P("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    P("Celsius equivalent is: %.1f\n", celsius);
    
	printf("\nLast Compiled: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
