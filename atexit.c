#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void cleanup(void) {
    printf("Clean up!\n");
}

int main (void) {
    atexit(cleanup);
    fork();
    // exit(0);
}