#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	//grab username from the user running this program
	char* user = getlogin();

	//only show info for current user running program
	char cmd[100];
	sprintf(cmd, "/usr/bin/who | grep %s", user);
	system(cmd);

	return 0;
}
