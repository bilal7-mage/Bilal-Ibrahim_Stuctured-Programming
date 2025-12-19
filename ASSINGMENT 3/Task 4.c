#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *p1, *p2;

    num1 = 2;
    num2 = 5;

    p1 = &num1;
    p2 = &num2;

    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}
