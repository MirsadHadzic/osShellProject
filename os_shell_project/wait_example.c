#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

	pid_t pid;
	int status;

	pid = fork();

	if (pid<0){
		perror("Fork failed");
		exit(EXIT_FAILURE);
	} else if (pid==0){
		printf("Child process (PID: %d) executing...\n", getpid());
		sleep(2);
		printf("Child process (PID: %d) exiting.\n", getpid());
		exit(EXIT_SUCCESS);
	} else {
		printf("Parent process (PID: %d) waiting for child to terminate...\n", getpid());
		wait(&status);
		printf("Parent process: Child terminated with status %d\n", status);
	}
	return 0;
}
