//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
#include <stdio.h>

int main() {
    int n, i, sum = 0, expectedSum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers (between 0 and %d, with one missing):\n", n, n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("The missing number is: %d\n", expectedSum - sum);

    return 0;
}