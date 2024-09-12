#include <stdio.h>

/**
 * @brief The main function demonstrates file handling in C.
 * 
 * This function attempts to create and open a file named "example.txt" for writing.
 * It checks if the file was successfully created and opened, prints a corresponding
 * message, and then closes the file.
 * 
 * @return int Returns 0 if the file is created successfully, or 1 if the file creation fails.
 */
int main() {
    FILE *file = fopen("example.txt", "w");  /**< Pointer to a FILE object used for file operations. Opens "example.txt" for writing. */
    
    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Failed to create file.\n");  /**< Print an error message if file creation fails. */
        return 1;  /**< Return 1 to indicate an error occurred. */
    }
    
    // Print a success message if the file was created successfully
    printf("File created successfully.\n");

    // Close the file
    fclose(file);

    return 0;  /**< Return 0 to indicate successful execution. */
}
