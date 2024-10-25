#include <stdio.h>
#include <stdlib.h>

void veTamGiacVuongBinhThuong(int chieuCao) {
    int i, j;
    for (i = 0; i < chieuCao; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" * ");
            
        }   printf("\n");
    }
}

int main() {
    veTamGiacVuongBinhThuong(5);
    return 0;
}