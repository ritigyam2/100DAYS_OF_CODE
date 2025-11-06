//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i, num, sum = 0, expected_sum;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one repeated): ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expected_sum = (n - 1) * (n - 2) / 2; // sum of first (n-1) numbers
    printf("Repeated element: %d\n", sum - expected_sum);

    return 0;
}