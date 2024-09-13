Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

int main() {
    char buffer[100];  // Array to hold each line of text from the file
    FILE *file = fopen("example.txt", "r");  // Opens "example.txt" for reading

    if (file == NULL) {  // Checks if the file was opened successfully
        printf("Failed to open file.\n");  // Prints an error message if file opening fails
        return 1;  // Returns 1 to indicate an error
    }

    // Reads each line from the file and prints it until the end of the file is reached
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);  // Prints the content of 'buffer'
    }

    fclose(file);  // Closes the file

    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for input and output functions.

2. **`char buffer[100];`**: Declares an array to store each line of text read from the file.

3. **`FILE *file = fopen("example.txt", "r");`**: Opens the file `example.txt` in read mode and assigns the file pointer to `file`.

4. **`if (file == NULL)`**: Checks if the file was successfully opened.

5. **`printf("Failed to open file.\n");`**: Prints an error message if the file could not be opened.

6. **`while (fgets(buffer, sizeof(buffer), file) != NULL)`**: Reads lines from the file into `buffer` and continues until the end of the file.

7. **`printf("%s", buffer);`**: Prints the content of `buffer`.

8. **`fclose(file);`**: Closes the file to free system resources.

9. **`return 0;`**: Indicates successful completion of the program.
