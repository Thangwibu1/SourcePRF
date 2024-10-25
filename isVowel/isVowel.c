#include <stdio.h>

// Hàm kiểm tra xem ký tự có phải là nguyên âm
int isVowel(char c) {
    // Chuyển ký tự về dạng chữ thường nếu nó là chữ hoa
    c = (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;

    // Kiểm tra xem ký tự có phải là nguyên âm
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char c;
    printf("Nhap mot chu cai: ");
    scanf("%c", &c);

    // Kiểm tra xem ký tự nhập vào có phải là chữ cái
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (isVowel(c)) {
            printf("Ky tu '%c' la nguyen am.\n", c);
        } else {
            printf("Ky tu '%c' khong phai la nguyen am.\n", c);
        }
    } else {
        printf("Ky tu '%c' khong phai la chu cai.\n", c);
    }

    return 0;
}
