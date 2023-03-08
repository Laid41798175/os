#include <unistd.h>
#include <wait.h>
#include <stdio.h>

int main(void){
	int x = 1;
	pid_t pid;
	pid = fork();
	if (pid == 0) {
		printf ("Child has x = %d\n", ++x);
	} else {
		printf ("Parent has x = %d\n", --x);
	}
	printf ("Bye from process %d with x = %d\n", getpid(), x);
	return 0;
}
