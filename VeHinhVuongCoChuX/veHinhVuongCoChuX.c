#include <stdio.h>

void drawRectangleWithX(int width, int height) {
    int i, j;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            // In dấu sao tại viền hình chữ nhật
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("*");
            }
            // In dấu sao trên các đường chéo của hình chữ nhật nếu là hình vuông (width == height)
            else if (width == height && (i == j || j == (width - 1 - i))) {
                printf("*");
            } 
            // In khoảng trắng ở các vị trí còn lại
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int width, height;

    // Nhập chiều rộng và chiều cao từ người dùng
    printf("Nhập chiều rộng của hình chữ nhật: ");
    scanf("%d", &width);
    printf("Nhập chiều cao của hình chữ nhật: ");
    scanf("%d", &height);

    // Gọi hàm để vẽ hình chữ nhật với dấu X bên trong (nếu cần)
    drawRectangleWithX(width, height);

    return 0;
}
