#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPowerOf2(int n) {
    int i = 0;
    int tmp = 0;
    while (tmp < n)
    {
        tmp = pow(2, i);
        if (tmp == n)
        {
            return 1;
        }
        else
        {
            i++;
        }
    }
    return 0;
}

int main() {
    printf("%d", checkPowerOf2(1024));
    return 0;
}