#include <stdio.h>

int main() {
    float radius, area;

    // Input
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Formula: A = 4 * pi * r^2
    area = 4 * 3.142 * radius * radius;

    // Output
    printf("Surface area of the sphere = %.2f\n", area);

    return 0;
}
