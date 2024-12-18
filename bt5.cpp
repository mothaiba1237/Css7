#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("phan tu lon nhat trong mang là: %d\n", max);
    printf("phan tu nho nhat trong mang là: %d\n", min);

    return 0;
}

