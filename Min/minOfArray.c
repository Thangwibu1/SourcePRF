#include <stdio.h>
#include <stdlib.h>

int minValue(int *a, int n) {
    int i;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int main() {
    return 0;
}