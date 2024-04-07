/*

// Counting sort

#include <stdlib.h>
#include <stdio.h>


void countingSort(int arr[], int n, int max) {
    int* count = (int*)malloc((max + 1) * sizeof(int));
    int* output = (int*)malloc(n * sizeof(int));
    int i;

    if (count == NULL || output == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (i = 0; i <= max; ++i) {
        count[i] = 0;
    }
    for (i = 0; i < n; ++i) {
        ++count[arr[i]];
    }
    for (i = 1; i <= max; ++i) {
        count[i] += count[i - 1];
    }
    for (i = 0; i < n; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
    for (i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
    free(count);
    free(output);
}

int main() {
    int arr[] = { 4, 2, 2, 8, 3, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = 8;
    printf("Original array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    countingSort(arr, n, max);
    printf("\nSorted array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/