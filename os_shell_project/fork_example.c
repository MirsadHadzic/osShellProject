#include <stdio.h>
#include <unistd.h>

int main(){

	pid_t pid;

	pid = fork();

	if (pid<0) {
		perror("Fork failed");
	} else if (pid==0){
		printf("Child process (PID: %d) created.\n", getpid());
	} else {
		printf("Parent process (PID: %d) created child process (PID: %d).\n", getpid(), pid);
	}
	return 0;
}
