
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Failed to create file.\n");
        return 1;
    }
    printf("File created successfully.\n");
    fclose(file);
    return 0;
}
