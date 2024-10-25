#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *a, int n) {
    int i, j;
    for (i = n - 1; i > 0; i--) {  // Corrected condition from i > 1 to i > 0
        for (j = 0; j < i; j++) {
            if (a[j] < a[j + 1]) {  // This condition sorts in descending order
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        } 
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // Adding a newline for better output formatting
}

int main() {
    int n = 7;
    int a[] = {8, 7, 2, 9, 1, 8, 11};  // Removed the excessive size of the array
    BubbleSort(a, n);
    return 0;
}
