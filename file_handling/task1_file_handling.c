#include <stdio.h>   // Standard I/O library for file operations
#include <stdlib.h>  // Standard library for exit()

int main() {
    FILE *filePointer;          // Declare a FILE pointer for file operations
    char filename[] = "output.txt";  // File to be created, written to, read, and appended
    char buffer[1000];          // Buffer to hold user input
    int choice;                 // User menu selection

    do {
        // Display the menu options
        printf("\n===== File Handling Menu =====\n");
        printf("1. Create File\n");
        printf("2. Write to File\n");
        printf("3. Append to File\n");
        printf("4. Read File\n");
        printf("5. Exit\n");
        printf("Enter your choice (1–5): ");
        scanf("%d", &choice);

        // Handle the user's choice
        switch (choice) {
            case 1:
                /*
                 * fopen() with mode "w" creates a new file or overwrites existing one.
                 * Returns NULL if file creation fails.
                 */
                filePointer = fopen(filename, "w");
                if (filePointer == NULL) {
                    printf("Error: File could not be created.\n");
                    exit(1);  // Exit with error code
                }
                printf("File '%s' created successfully.\n", filename);
                fclose(filePointer);  // Close the file
                break;

            case 2:
                /*
                 * Write new content to the file using "w" mode (overwrite mode).
                 * Uses fgets() to capture multi-word input.
                 */
                filePointer = fopen(filename, "w");
                if (filePointer == NULL) {
                    printf("Error: Could not open file for writing.\n");
                    exit(1);
                }
                getchar();  // Clear newline left in input buffer
                printf("Enter text to write to the file:\n");
                fgets(buffer, sizeof(buffer), stdin);
                fputs(buffer, filePointer);  // Write input to file
                fclose(filePointer);  // Save and close file
                printf("Data written to '%s'.\n", filename);
                break;

            case 3:
                /*
                 * Append new content to the file using "a" mode (append mode).
                 * The new content will be added at the end of the existing file.
                 */
                filePointer = fopen(filename, "a");
                if (filePointer == NULL) {
                    printf("Error: Could not open file for appending.\n");
                    exit(1);
                }
                getchar();  // Clear input buffer
                printf("Enter text to append to the file:\n");
                fgets(buffer, sizeof(buffer), stdin);
                fputs(buffer, filePointer);  // Append input to file
                fclose(filePointer);
                printf("Data appended to '%s'.\n", filename);
                break;

            case 4:
                /*
                 * Read and display the contents of the file using "r" mode (read mode).
                 * Use fgetc() to read the file character by character until EOF.
                 */
                filePointer = fopen(filename, "r");
                if (filePointer == NULL) {
                    printf("Error: Could not open file for reading. File may not exist yet.\n");
                    break;
                }
                printf("\nContents of '%s':\n", filename);
                char ch;
                while ((ch = fgetc(filePointer)) != EOF) {
                    putchar(ch);
                }
                fclose(filePointer);  // Close file after reading
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5);  // Repeat until the user chooses to exit

    return 0;  // Program ends successfully
}
