#include <stdio.h>
#include <stdlib.h>

void veTamGiacCan(int chieuCao) {
    int i, j;
    for (i = 0; i < chieuCao; i++)
    {
        for (j = 0; j < chieuCao * 2; j++)
        {
            if (j > chieuCao - i - 2 && j < chieuCao + i)
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
    veTamGiacCan(5);
    return 0;
}