#include <stdio.h>
#include <stdlib.h>

int GCD(int n, int m) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int LCMneucosanGCD(int n, int m) {
    int lcm = n * m;
    lcm /= GCD(n, m); //thay ten ham cho giong de thi
    return lcm;
}

int LCMneuchuacosanGCD(int n, int m) {
    int gcd, lcm = n*m;
	while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    gcd = m;
	lcm/=gcd;
    return lcm;
}

int main() {
    printf("%d, %d, %d", GCD(4, 12), LCMneucosanGCD(4, 12), LCMneuchuacosanGCD(4,12));
    return 0;
}