Here’s the C code with minimal comments and a brief explanation:

```c
#include <stdio.h>   // Includes the standard input-output library
#include <string.h>  // Includes the string handling functions

int main() {
    char str1[20] = "Hello";  // Initializes str1 with "Hello"
    char str2[20] = "World";  // Initializes str2 with "World"
    
    strcat(str1, str2);  // Concatenates str2 to str1

    printf("Concatenated string: %s\n", str1);  // Prints the concatenated string

    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard input-output library for functions like `printf`.

2. **`#include <string.h>`**: Includes the string handling functions like `strcat`.

3. **`char str1[20] = "Hello";`**: Declares and initializes `str1` with the string "Hello".

4. **`char str2[20] = "World";`**: Declares and initializes `str2` with the string "World".

5. **`strcat(str1, str2);`**: Concatenates the string `str2` to the end of `str1`.

6. **`printf("Concatenated string: %s\n", str1);`**: Prints the resulting concatenated string.

7. **`return 0;`**: Indicates successful completion of the program.
