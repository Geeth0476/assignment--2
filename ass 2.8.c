#include <stdio.h>

int main() {
    int arr[100]; 
    int freq[100] = {0};
    int size, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        freq[i] = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                freq[i]++;
                freq[j] = -1; 
            }
        }
    }
    printf("Frequency of each element in the array:\n");
    for (i = 0; i < size; i++) {
        if (freq[i] != -1) {
            printf("%d occurs %d time(s)\n", arr[i], freq[i]);
        }
    }

    return 0;
}
