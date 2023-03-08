#include <unistd.h>
#include <wait.h>
#include <stdio.h>

int main(void){
    printf ("L0\n");
	fork();
    printf ("L1\n");
    fork();
    printf ("L2\n");
    fork();
    printf ("Bye\n");
	return 0;
}
