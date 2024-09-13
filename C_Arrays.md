Certainly! Here is the C code with meaningful comments followed by an explanation:

```c
#include <stdio.h>  // Include the standard input-output library for using printf

int main() {
    // Initialize an array 'arr' with 3 integer elements
    int arr[3] = {1, 2, 3};

    // Iterate over each element of the array
    for (int i = 0; i < 3; i++) {
        // Output the index and value of the current array element
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    // Indicate that the program has completed successfully
    return 0;
}
```

### Explanation

1. **`#include <stdio.h>`**: This line includes the standard input-output library, which is necessary to use the `printf` function for displaying output to the console.

2. **`int main()`**: This is the main function where the execution of the program begins. The `int` before `main` indicates that the function returns an integer value.

3. **`int arr[3] = {1, 2, 3};`**: This line declares an integer array named `arr` with 3 elements and initializes it with the values 1, 2, and 3.

4. **`for (int i = 0; i < 3; i++)`**: This `for` loop iterates over the array indices from 0 to 2. The loop control variable `i` starts at 0 and increments by 1 after each iteration until it reaches 3 (which is the size of the array).

5. **`printf("arr[%d]: %d\n", i, arr[i]);`**: Inside the loop, this line prints the index and the corresponding value of the array element at that index. `%d` is a format specifier for integers, and `i` and `arr[i]` are the values substituted into the format string.

6. **`return 0;`**: This statement indicates that the program has executed successfully. The `0` is returned to the operating system to signal that no errors occurred.
