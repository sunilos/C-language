Here’s the C code with minimal comments and a brief explanation:

```c
#include <stdio.h>  // Includes the standard input-output library for file handling

int main() {
    FILE *file = fopen("example.txt", "w");  // Opens "example.txt" for writing

    if (file == NULL) {  // Checks if the file was opened successfully
        printf("Failed to open file.\n");
        return 1;  // Returns 1 to indicate an error occurred
    }

    fprintf(file, "Hello, File!\n");  // Writes the string to the file

    fclose(file);  // Closes the file
    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard input-output library for file handling.

2. **`FILE *file = fopen("example.txt", "w");`**: Opens a file named `example.txt` for writing. If the file doesn't exist, it creates one.

3. **`if (file == NULL)`**: Checks if the file was successfully opened. If not, an error message is printed.

4. **`fprintf(file, "Hello, File!\n");`**: Writes the string "Hello, File!" to the file.

5. **`fclose(file);`**: Closes the file after writing to it.

6. **`return 0;`**: Indicates that the program executed successfully.
