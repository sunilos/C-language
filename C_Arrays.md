#include <stdio.h>  // This header file is included to use the printf function

int main() {
    // Declare and initialize an array 'arr' with 3 elements
    int arr[3] = {1, 2, 3};

    // Loop through the array and print each element
    for (int i = 0; i < 3; i++) {
        // Print the current index and its corresponding value in the array
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    // Return 0 to indicate that the program executed successfully
    return 0;
}
