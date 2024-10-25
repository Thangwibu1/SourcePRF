#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int n) {
    int result, tmp;
    result  = 0;
    while (n != 0)
    {
        tmp = n % 10;
        result = result * 10 + tmp;
        n /= 10;

    }
    return result;
}

int main() {
    int n = 1234;
    return 0;
}