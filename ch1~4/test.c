#include <stdio.h>

int fn(int n) {
    return (2*n);
}

int main(void) {
    int n = 3;
    printf("%d\n", n);
    n = fn(n);
    printf("%d\n", n);
}