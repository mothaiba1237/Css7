#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 5, 6, 9};
    int even = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            even = 1;
        }
    }
    if (!even) {
        printf("mang khong chua so chan");
    }

    return 0;
}

