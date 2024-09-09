#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;
    printf("Pointer value: %p\n", ptr);
    printf("Pointer dereferenced value: %d\n", *ptr);
    return 0;
}
