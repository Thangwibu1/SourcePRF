#include <stdio.h>
#include <stdlib.h>
int isPrime(int n)
{
    int i;
    if (n < 2)
    {
        return 0;
    }
    else if (n == 3)
    {
        return 1;
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int sum(int *a, int n)
{
    int sum, i;
    sum = 0;
    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]) == 1)
        {
            sum += a[i];
        }
    }
    return sum;
}

int main()
{
    printf("%d", isPrime(144));
    return 0;
}