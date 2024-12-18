#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        printf("phan tu thu %d: %d\n", i+1, arr[i]);
    }

    printf("do dai cua mang la: %d\n", length);

    return 0;
}

