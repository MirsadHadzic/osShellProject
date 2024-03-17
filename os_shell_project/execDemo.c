#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

	char *args[] = {"./EXEC", NULL};
	execvp(args[0], args);
	
	// whole process is replaced by another processs EXEC.c
	printf("Ending........");

	return 0;
}
