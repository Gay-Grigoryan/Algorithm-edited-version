/*

//Exponential Search
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int exponentialSearch(int arr[], int n, int x) {
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= x)
        i *= 2;
    return binarySearch(arr, i / 2, (i < n) ? i : n - 1, x);
}
int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1;
    int result = exponentialSearch(arr, n, x);
    if (result == -1)
        printf("Element is not present in the array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
*/