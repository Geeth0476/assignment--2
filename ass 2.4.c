#include <stdio.h>

int main() 
{
    int arr[100], n, max_diff = 0, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[j] - arr[i] > max_diff) {
                max_diff = arr[j] - arr[i];
            }
        }
    }
    printf("The maximum difference between two elements is %d.\n", max_diff);
    return 0;
}
