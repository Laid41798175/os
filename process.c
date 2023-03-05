#include <stdio.h>
#include <unistd.h>

int main() {
    __pid_t pid;
    pid = fork();
    printf("Hello, process %d!\n", pid);
    return 0;
}