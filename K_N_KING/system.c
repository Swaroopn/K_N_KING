/****************************
 * PROGRAM NAME:  system.c  *
 * PAGE NUMBER:        689  *
 * AUTHOR:         SWAROOP  *
 ****************************/
 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sys;
	
	printf("1 - Shutdown\t2 - Date\t3 - Process\t4 - firefox\t5 - VLC\t6 - Restart\n");
	printf("Enter any number: ");
	scanf("%d", &sys);
	if (sys == 1)
		system("sudo init 0");
	else if (sys == 2)
		system("date");
	else if (sys == 3)
		system("ps -el");
	else if (sys == 4)
		system("firefox www.linuxmint.com");
	else if (sys == 5)
		system("vlc baby.mp3");
	else if (sys == 6)
		system("sudo init 6");
	else if (sys == 1)
	    system("ls -l");
	else system("exit");
	
    return 0;
}

