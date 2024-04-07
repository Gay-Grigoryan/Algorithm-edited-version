/*

//Bucket sort

#include <stdio.h>

#include <stdlib.h>
void bucketSort(int arr[], int n) {
    int max_value = 1000;
    int* count = (int*)malloc(max_value * sizeof(int));
    if (count == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    for (int i = 0; i < max_value; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    int index = 0;
    for (int i = 0; i < max_value; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[index++] = i;
        }
    }
    free(count);
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = { 5, 15, 0, 30, 100, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    bucketSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
*/