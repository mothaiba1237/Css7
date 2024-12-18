#include <stdio.h>

int main() {
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("cac phan tu trong mang la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

