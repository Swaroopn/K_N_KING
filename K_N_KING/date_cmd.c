#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int mm, dd, yyyy, ch;
	char date[10];
	int i;
	
    if (argc != 2)
    {
        fprintf(stderr, "Invalid number of arguments!");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%s", date);

    /*
    for (i = 0; i != strlen(date); i++)
    {
    	if (date[i] == '-')
    		continue;
    	else
    		
    			
    		printf("%c", date[i]);
    }
    */
    
    sscanf(argv[1], "%[^-]d", mm);
    sscanf(argv[1], "%[^-]d", dd);
    sscanf(argv[1], "%[^-]d", yyyy);
    
    printf("%d/%d/%d", mm, dd, yyyy);
    
    return 0;
}

