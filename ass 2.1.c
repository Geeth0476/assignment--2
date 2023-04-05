#include <stdio.h>

int main()
{
    int arr[100], size, i, max;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);
}
