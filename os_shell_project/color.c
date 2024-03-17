#include <stdio.h>

void red()
{

	printf("\033[1;31m"); // set color to red 

}

void yellow()
{

	printf("\033[1;33m"); // set color to yellow

}

void reset()
{

	printf("\033[0m"); // reset to default color

}
int main()
{

	red();
	printf("Dobar ");
	yellow();
	printf("Dan\n");
	reset();
	printf("reset");
	return 0;
}
