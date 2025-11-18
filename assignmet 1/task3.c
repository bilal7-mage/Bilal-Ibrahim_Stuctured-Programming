#include <stdio.h>

int main() {
    char name[50];  // space to store the string
    int length = 0;

    // Input
    printf("Enter your name: ");
    scanf("%s", name);   // reads a single word

    // Output the string back
    printf("You entered: %s\n", name);

    // Counting characters manually
    while (name[length] != '\0') {  
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
