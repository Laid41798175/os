#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int value = 5;

int main() {
    pid_t pid;
    pid = fork();

    if (pid == 0) {
        value += 5;
        return 0;
    } else if (pid > 0) {
        wait(NULL);
        printf("value = %d\n", value);
    }    
}