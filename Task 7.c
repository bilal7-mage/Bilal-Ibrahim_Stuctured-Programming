#include <stdio.h>

#define BUFFER_SIZE

int main() {
    int buffer[BUFFER_SIZE];
    int index = 0, i, data;

    printf("Enter %d value;\n", BUFFER_SIZE);
    for(i = 0; i< BUFFER SIZE; i++);{
        scanf("%d", &buffer[i]);
    }

    while(1) {
        printf("Enter data (-1 to stop): ");
        scanf("%d", &data);

        if(data == -1)
            break;

        buffer[index] = data;
        index = (index + 1) % BUFFER_SIZE;
    }

    printf("Buffer content (oldest to newest): ");
    for(i = 0; i < BUFFER SIZE; i++) {
        printf("%d", buffer[(index +i) % BUFFER_SIZE]);
    }

    return 0;
}
''
