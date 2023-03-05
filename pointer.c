#include <stdio.h>

int main (void) {
    int x = 5;
    int* p = &x;
    *p += 1;
    printf("%d\n", *p);
    printf("%d\n", x);
}