#include <stdio.h>
#include <stdlib.h>

void veTamGiacVuongBinhThuong3(int chieuCao) {
    int i, j;
    for (i = 0; i < chieuCao; i++)
    {
        for (j = 0; j < chieuCao; j++)
        {
            if (j >= chieuCao - i - 1)
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
    veTamGiacVuongBinhThuong3(5);
    return 0;
}