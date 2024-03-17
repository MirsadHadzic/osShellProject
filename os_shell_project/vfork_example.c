#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main()
{

	pid_t pid;

	printf("Before vfork()\n");

	pid = vfork();

	if (pid<0)
	{
		perror("vfork failed");
		exit(EXIT_FAILURE);
	}else if (pid==0){
		printf("Child process (PID: %d) executing...\n", getpid());
		exit(EXIT_SUCCESS);
	}else{
		printf("Parent process (PID: %d) waiting for child to terminate...\n", getpid());
		wait(NULL);
		printf("Parent process: Child terminated\n");
	}
	printf("After vfork()\n");
	
	return 0;
}
