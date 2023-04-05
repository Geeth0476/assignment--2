#include <stdio.h>
int main() 
{
    int arr[100], size, i, max1, max2;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = arr[0];
    max2 = arr[1];

    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (i = 2; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("The largest two elements in the array are: %d and %d\n", max1, max2);

}
