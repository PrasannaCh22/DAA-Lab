//counting sort
#include <stdio.h>

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
    int count[9] = {0};
    int i, j, k = 0;

    // Count each element
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Put elements back in sorted order
    for (i = 0; i < 9; i++) {
        for (j = 0; j < count[i]; j++) {
            arr[k] = i;
            k++;
        }
    }

    // Print sorted array
    printf("Sorted array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}