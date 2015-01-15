#include <stdio.h>

int main(void)
{
    int i = 1;
    {

        {
            printf("%d ", i++);
            int j = i;
            printf("%d\n ", j);
        }
    }

return 0;
}
