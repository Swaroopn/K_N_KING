#include <stdio.h>
#include <string.h>

char s1[100], s2[100], flames[7] = {'F', 'L', 'A', 'M', 'E', 'S'};
int i, j = 0, ch, length, len = 0, size;

int main()
{


    while ((ch = getchar()) != '\n')
    {
        s1[j] = ch;
        j++;
    }

    top:
    while ((ch = getchar()) != '\n')
    {
    	for(i = 0; i < strlen(s1); i++)
        {
            if (ch == s1[i])
            {
                s1[i] = ' ';

                goto top;
            }
        }

        s1[j] = ch;

        j++;
    }
    s1[j] = '\0';


    /*********************************
     * printf("Remaining string: "); *
     * for(i=0;i<j;i++)              *
     * {                             *
     *    if (s1[i] == ' ')          *
     *    {                          *
     *       len++;                  *
     *       continue;               *
     *    }                          *
     *    printf("%c", s1[i]);       *
     * }                             *
     *  printf("\n");                *
     *********************************/
    printf("Remaining string: ");
      for(i=0;i<j;i++)
      {
         if (s1[i] == ' ')
         {
            len++;
           continue;
        }
         printf("%c", s1[i]);
      }
       printf("\n");
    len = strlen(s1) - len;

    printf("%d", len);

    for (i = 0;i < 6; i++)
    {
        if (flames[len%6] == ' ')
            continue;
        flames[len%6] = ' ';
    }

    return 0;
}
