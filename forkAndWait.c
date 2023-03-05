#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main() {
    pid_t pid;
    pid = fork();
    if (pid > 0) {
        wait(NULL);
    }
    printf("Hello, process %d!\n", pid);
    return 0;
}