#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

	printf("Before execl() call\n");

	execl("/bin/ps", "ps", NULL);
	printf("steps after execl call");

}
