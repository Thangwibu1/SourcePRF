#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *a, int n) {
    int i;
    int j;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1]) 
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        } 
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}
int main() {
    int n = 7;
    int a[1000] = {8, 7, 2, 9, 1, 8, 10};
    BubbleSort(a, n);
    return 0;
}