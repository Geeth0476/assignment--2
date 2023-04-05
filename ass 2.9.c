#include <stdio.h>

int main() {
    int arr[100]; 
    int sortedArr[100];
    int size, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++) {
        sortedArr[i] = arr[size - i - 1];
    }

    printf("The sorted array in descending order is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", sortedArr[i]);
    }

    return 0;
}
