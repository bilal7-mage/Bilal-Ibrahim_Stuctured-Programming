#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 4, b = 5;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
