#include <stdio.h>

int main() {
    int count = 10;
    int *ptr = &count;

    printf("Value of count using pointer: %d\n", *ptr);

    return 0;
}
