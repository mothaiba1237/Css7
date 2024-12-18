#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 5, 6};

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

