#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double average(int n) {
    int i = 0;
    int sum = 0;
    int count = 0;
    double result;
    while (i <= n)
    { 
        if (isPerfectSquareNumber(i))
        {
            sum += i;
            count++;
        }
        i++;
    }
    result = (double)sum / (double)count;
    return result;
}
// Đây là hàm kiểm tra xem có phải số chính phương không
int isPerfectSquareNumber(int n) {
    int i, tmp = 0;
    for (i = 0; i <= n; i++)
    {
        if (i * i == n)
        {
            tmp = 1;
            break;
        }
        else
        {
            tmp = 0;
        }
    }
    if (tmp == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    printf("%.2lf", average(2));
    return 0;
}