/*****************************
 * NAME:    TCS_ROD_LENGTH.C *
 * AUTHOR:  SWAROOP NAGENDRA *
 ****************************/

#include <stdio.h>
#include <string.h>

struct
{
    char name[14];
    int id;
    float salary;
} emp[10];

int main(void)
{
    int n, i;
    char pos, details[10], str[10], *name;

    printf("Enter the key words: ");
    gets(details);

    printf("Enter POS(S or E)");
    scanf("%c", &pos);

    printf("Enter number of employees: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", emp[i].name);
        printf("Enter the id: ");
        scanf("%d", &emp[i].id);
        printf("Enter the salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n\n");

    if (toupper(pos) == 'S')
    {
        for (i = 0; i < n; i++)
        {
            name = emp[i].name;
            strncpy(str, name, strlen(details));
            if (!strcmp(str, details))
            {
                printf("%s\t", emp[i].name);
                printf("%d\t", emp[i].id);
                printf("%.2f\n", emp[i].salary);
            }
        }
    }
    /*
    else
    if (toupper(pos) == 'E')
    {
        for (i = 0; i < n; i++)
        {

            name = emp[i].name;
            strncpy(str, name, -(strlen(details)));
            if (!strcmp(str, details))
            {
                printf("%s\t", emp[i].name);
                printf("%d\t", emp[i].id);
                printf("%.2f\n", emp[i].salary);
            }
        }
    }
    */
    return 0;
}
