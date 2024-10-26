#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    const char *text = "helo helo    helloooo   h";
    printf("Number of words: %d\n", countWords(text)); // Output: 3
    return 0;
}