/*************************
 * NAME:        fread.c	 *
 * PAGE NUM:        571  *
 * AUTHOR:      SWAROOP  *
 *************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[60] = "";
	int n;
	FILE *fp;
	
	if ((fp = fopen("fread.txt", "r")) == NULL)
	{	
		puts("Cannot Open input file!");
		exit(EXIT_FAILURE);
	}
	
	/* 
		array's address
		size of each array element
		num of ele to write
		file pointed by fp in which data should be written
	*/
	n = fread(str, sizeof(str[0]), sizeof(str)/sizeof(str[0]), fp);
	printf("%d\n", n);
	printf("%s\n", str);
	fclose(fp);

	return 0;
}
