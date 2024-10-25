#include <stdio.h>
#include <stdlib.h>

void drawDiamond(int chieuCao) {
    int i, j;
    for (i = 1; i <= chieuCao; i++) {
        for (j = i; j < chieuCao; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = chieuCao - 1; i >= 1; i--) {
        for (j = chieuCao; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Input height: ");
    scanf("%d", &n);

    drawDiamond(n);

    return 0;
}
