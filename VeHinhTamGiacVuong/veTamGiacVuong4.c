#include <stdio.h>
#include <stdlib.h>

void veTamGiacVuongBinhThuong4(int chieuCao) {
    int i, j;
    for (i = 0; i < chieuCao; i++)
    {
        for (j = 0; j < chieuCao; j++)
        {
            if (j >= i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
            
        }   printf("\n");
    }
}

int main() {
    veTamGiacVuongBinhThuong4(5);
    return 0;
}