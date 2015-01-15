/*********************************
 * PROGRAM NAME:  points_coll.c  *
 * PAGE NUMBER:                  *
 * AUTHOR:              SWAROOP  *
 *********************************/

#include <stdio.h>

int main(void)
{
    float marks[100], score=0, points=0;
    int i=0;
    while (i < 5)
    {
        printf("Enter marks%d (having grade 4): ", i+1);
        scanf("%f",&marks[i]);
        score += marks[i];
        i++;
    }
    printf("Enter marks%d(having grade 3): ", i+1);
    scanf("%f", &marks[i]);
    score += marks[i];
    i++;

    printf("Enter two lab marks: ");
    scanf("%f", &marks[i]);
    score += marks[i];

    i++;
    scanf("%f", &marks[i]);
    score += marks[i];

    printf("\nTotal marks: %.2f", score);
    points = (score / 260) * 10;
    printf("\nPoints: %.2f\n", points);
    return 0;
}
