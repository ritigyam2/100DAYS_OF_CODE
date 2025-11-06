#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    printf("Maximum in each subarray: ");
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i; j < i + k; j++)
            if (arr[j] > max)
                max = arr[j];
        printf("%d ", max);
    }
    printf("\n");

    return 0;
}