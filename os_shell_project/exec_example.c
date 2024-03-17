#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

	printf("Before exec() call\n");
	//execl("/os_shell_project/proba_piping_dva.txt", "ls", "-l", NULL);
	system("ls -l");
	perror("After system() call\n");

	return 0;

}
