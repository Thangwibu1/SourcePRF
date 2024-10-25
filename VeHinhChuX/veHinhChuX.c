#include <stdio.h>

void drawX(int n) {
    int i, j;

    // Vẽ chữ X
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == i || j == (n - 1 - i)) {
                // In dấu sao tại vị trí đường chéo chính và phụ
                printf("*");
            } else {
                // In khoảng trắng cho các vị trí khác
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("height(odd number): ");
    scanf("%d", &n);

    // Kiểm tra để đảm bảo n là số lẻ
    if (n % 2 == 0) {
        printf("Vui lòng nhập một số lẻ.\n");
    } else {
        drawX(n);
    }

    return 0;
}
