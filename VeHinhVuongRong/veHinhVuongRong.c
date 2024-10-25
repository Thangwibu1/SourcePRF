#include <stdio.h>
#include <stdlib.h>

void veHinhChutNhatRong(int chieuDai, int chieuRong) {
    int i, j;
    for (i = 0; i < chieuRong; i++)
    {
        for (j = 0; j < chieuDai; j++)
        {
            if (j == 0 || i == 0 || j == chieuDai - 1 || i == chieuRong - 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        } printf("\n");
    }
}

int main() {
    veHinhChutNhatRong(8, 5);
    return 0;
}