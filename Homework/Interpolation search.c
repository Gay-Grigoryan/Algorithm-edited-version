/*
//Interpolation search
#include <stdio.h>

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    while (low <= high && x >= arr[low] && x <= arr[high]) {
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]);
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 50;

    int result = interpolationSearch(arr, n, x);
    if (result == -1)
        printf("Element is not present in the array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
*/