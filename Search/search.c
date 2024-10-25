#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Trả về vị trí của phần tử nếu tìm thấy
        }
    }
    return -1;  // Trả về -1 nếu không tìm thấy
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Nhập số cần tìm: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Số %d được tìm thấy ở vị trí %d.\n", target, result);
    } else {
        printf("Không tìm thấy số %d trong mảng.\n", target);
    }

    return 0;
}
