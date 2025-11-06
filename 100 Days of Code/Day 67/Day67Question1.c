#include <stdio.h>
int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    int found = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    if(!found)
        printf("-1 -1");
    return 0;
}