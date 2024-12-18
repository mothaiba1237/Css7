#include <stdio.h>

int main() {
    int n;

    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        do {
            printf("nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                printf("phan tu phai la so le , vui long nhap lai\n");
            }
        } while (arr[i] % 2 == 0);
    }
    printf("mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

