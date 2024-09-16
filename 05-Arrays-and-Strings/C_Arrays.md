### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}
```

### **2. Code with comments and explanations:**
```c
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
```

### Explanation

- The `#include <stdio.h>` directive includes the Standard I/O library, which provides the `printf` function for displaying output.
- The `main` function is the entry point of the program.
- An array `arr` of size 3 is declared and initialized with the values `{1, 2, 3}`.
- A `for` loop is used to iterate over the elements of the array.
  - Inside the loop, the `printf` function prints the index and value of each element in the array.
- The program concludes with `return 0;`, which signifies successful execution and returns control to the operating system.
