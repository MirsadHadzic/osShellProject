#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

/*void prompt(){

char hostname[HOST_NAME_MAX];
char username[LOGIN_NAME_MAX];

gethostname(hostname, HOST_NAME_MAX);
getlogin_r(username, LOGIN_NAME_MAX);

printf("%s@%s:~$", username, hostname);

}*/

int main(){

/*while(1){

	prompt();
	getchar(); // wait for user to press enter
}
return 0;*/

char input[MAX_INPUT_SIZE]; // Declare a character array to store user input

while(1){
printf("prompt$");
fgets(input, MAX_INPUT_SIZE, stdin); // Read user input from the standard input stream (keyboard)

memset(input, 0, sizeof(input)); // Clear the contents of the input buffer
}

return 0;
}
