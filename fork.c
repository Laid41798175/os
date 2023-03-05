#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main() {
    pid_t pid;
    pid = fork();
    printf("Hello, process %d!\n", pid);
    return 0;
}