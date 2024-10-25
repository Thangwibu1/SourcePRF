#include <stdio.h>
#include <stdlib.h>
int isPrime(int n)
{
    int i, tmp = 0;
    for (i = 0; i < n; i++)
    {
        if(n % i == 0) {
            tmp += i;
        }
    }
    if (tmp == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("%d", isPrime(144));
    return 0;
}