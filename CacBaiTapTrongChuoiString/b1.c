#include <stdio.h>
#include <ctype.h>

void filter_string(char *input, char *output) {
    int i = 0, j = 0;
    while (input[i] != '\0' && i < 100) {  // Process up to 100 characters
        if (isalpha(input[i])) {  // Check if the character is alphabetic
            output[j++] = input[i];
        }
        i++;
    }
    output[j] = '\0';  // Null-terminate the output string
}

int main() {
    char input[101];  // Extra space for null terminator
    char output[101]; // Filtered string will be stored here

    printf("Enter a string (up to 100 characters): ");
    fgets(input, sizeof(input), stdin);  // Read input with fgets to avoid buffer overflow

    // Remove newline character if present (fgets includes newline)
    int len = 0;
    while (input[len] != '\0') len++;
    if (len > 0 && input[len-1] == '\n') {
        input[len-1] = '\0';
    }

    filter_string(input, output);
    printf("Output: %s\n", output);

    return 0;
}