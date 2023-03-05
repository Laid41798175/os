#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main() {
    fork();
    fork();
    fork();
    printf("Hi\n");
}