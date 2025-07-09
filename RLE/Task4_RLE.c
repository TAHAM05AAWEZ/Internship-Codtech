// TASK 4: RLE Compression and Decompression with User Input

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Function to compress string using Run-Length Encoding (RLE)
void compressRLE(const char *input) {
    int len = strlen(input);

    printf("Compressed: ");
    for (int i = 0; i < len; i++) {
        int count = 1;
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", input[i], count);
    }
    printf("\n");
}

// Function to decompress RLE encoded string (e.g., a3b2 -> aaabb)
void decompressRLE(const char *input) {
    printf("Decompressed: ");
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        i++;
        int count = 0;
        while (isdigit(input[i])) {
            count = count * 10 + (input[i] - '0');
            i++;
        }
        i--; // step back once since for loop will increment again

        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
    }
    printf("\n");
}

int main() {
    char choice;
    char input[200];

    printf("===== RLE Compression & Decompression =====\n");
    printf("Enter 'c' to compress or 'd' to decompress: ");
    scanf(" %c", &choice);
    getchar(); // consume newline character after scanf

    if (choice == 'c' || choice == 'C') {
        printf("Enter the string to compress: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // remove trailing newline
        compressRLE(input);
    } else if (choice == 'd' || choice == 'D') {
        printf("Enter the RLE encoded string (e.g., a3b2): ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        decompressRLE(input);
    } else {
        printf("Invalid choice. Please enter 'c' or 'd'.\n");
    }

    return 0;
}
