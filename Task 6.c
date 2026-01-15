#include <stdio.h>
int main() {
    int arr[100];
    int n, i, pos, value;

    printf("Input the size of the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)  {
        printf("element - %d; ", i);
        scanf("%d", &arr[i]);
    }
    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the the position where the value is to inserted: ");
    scanf("%d", &pos);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    printf("The current list of the array:\n");
    for(i = 0; i < n; i++)
        printf("%d", arr[i]);

    return 0;
}
