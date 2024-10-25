#include <stdio.h>
#include <stdlib.h>

int maxValue(int *a, int n) {
    int i;
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int main() {
    return 0;
}