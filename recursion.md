Here’s the C code with minimal comments and a brief explanation:

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;  // Base case: factorial of 0 is 1
    else return n * factorial(n - 1);  // Recursive case: n * factorial of (n - 1)
}

int main() {
    int number = 5;  // Integer variable to store the number for which factorial is calculated
    printf("Factorial of %d is %d\n", number, factorial(number));  // Prints the factorial of the number
    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for input and output functions.

2. **`int factorial(int n)`**: Defines a recursive function to calculate the factorial of `n`.

3. **`if (n == 0) return 1;`**: The base case for recursion; factorial of 0 is 1.

4. **`else return n * factorial(n - 1);`**: The recursive case; multiplies `n` by the factorial of `n - 1`.

5. **`int main()`**: The main function where execution begins.

6. **`int number = 5;`**: Declares and initializes the number for which factorial is calculated.

7. **`printf("Factorial of %d is %d\n", number, factorial(number));`**: Prints the result of the factorial function.

8. **`return 0;`**: Indicates successful completion of the program.
