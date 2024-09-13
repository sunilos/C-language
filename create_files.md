Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");  // Opens "example.txt" for writing

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Failed to create file.\n");  // Print error message if file creation fails
        return 1;  // Return 1 to indicate an error
    }

    // Print success message if the file was created
    printf("File created successfully.\n");

    // Close the file
    fclose(file);

    return 0;  // Return 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for file operations.

2. **`FILE *file = fopen("example.txt", "w");`**: Opens "example.txt" for writing. If the file does not exist, it will be created.

3. **`if (file == NULL)`**: Checks if the file failed to open.

4. **`printf("Failed to create file.\n");`**: Prints an error message if the file could not be created.

5. **`return 1;`**: Indicates an error occurred.

6. **`printf("File created successfully.\n");`**: Prints a success message if the file was created successfully.

7. **`fclose(file);`**: Closes the file to free resources.

8. **`return 0;`**: Indicates successful completion of the program.
