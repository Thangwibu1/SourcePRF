#include <stdio.h>
#include <stdlib.h>

void veTamGiacVuongBinhThuong2(int chieuCao) {
    int i, j;
    for (i = 0; i < chieuCao; i++)
    {
        for (j = 0; j < chieuCao; j++)
        {
            if (j < chieuCao - i)
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
    veTamGiacVuongBinhThuong2(5);
    return 0;
}