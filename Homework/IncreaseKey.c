/*

//Binary Max Heap with IncreaseKey
#include <stdlib.h>
#include <stdio.h>

#define MAX_HEAP_SIZE 100
struct MaxHeap {
    int array[MAX_HEAP_SIZE];
    int size;
};
struct MaxHeap* createMaxHeap() {
    struct MaxHeap* maxHeap = (struct MaxHeap*)malloc(sizeof(struct MaxHeap));
    if (maxHeap == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    maxHeap->size = 0;
    return maxHeap;
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int parent(int i) {
    return (i - 1) / 2;
}
void maxHeapify(struct MaxHeap* maxHeap, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < maxHeap->size && maxHeap->array[left] > maxHeap->array[largest])
        largest = left;
    if (right < maxHeap->size && maxHeap->array[right] > maxHeap->array[largest])
        largest = right;
    if (largest != i) {
        swap(&maxHeap->array[i], &maxHeap->array[largest]);
        maxHeapify(maxHeap, largest);
    }
}
void insert(struct MaxHeap* maxHeap, int item) {
    if (maxHeap->size >= MAX_HEAP_SIZE) {
        printf("Heap Overflow\n");
        return;
    }
    int i = maxHeap->size;
    maxHeap->array[i] = item;
    maxHeap->size++;
    while (i != 0 && maxHeap->array[parent(i)] < maxHeap->array[i]) {
        swap(&maxHeap->array[i], &maxHeap->array[parent(i)]);
        i = parent(i);
    }
    printf("%d inserted into max heap\n", item);
}
int extractMax(struct MaxHeap* maxHeap) {
    if (maxHeap->size <= 0) {
        printf("Heap Underflow\n");
        return -1;
    }
    if (maxHeap->size == 1) {
        maxHeap->size--;
        return maxHeap->array[0];
    }
    int max = maxHeap->array[0];
    maxHeap->array[0] = maxHeap->array[maxHeap->size - 1];
    maxHeap->size--;
    maxHeapify(maxHeap, 0);
    return max;
}
void increaseKey(struct MaxHeap* maxHeap, int index, int newValue) {
    if (index >= maxHeap->size || index < 0) {
        printf("Invalid index\n");
        return;
    }
    maxHeap->array[index] = newValue;
    while (index != 0 && maxHeap->array[parent(index)] < maxHeap->array[index]) {
        swap(&maxHeap->array[index], &maxHeap->array[parent(index)]);
        index = parent(index);
    }
    printf("Key at index %d increased to %d\n", index, newValue);
}

void printMaxHeap(struct MaxHeap* maxHeap) {
    printf("Max Heap: ");
    for (int i = 0; i < maxHeap->size; i++) {
        printf("%d ", maxHeap->array[i]);
    }
    printf("\n");
}

int main() {
    struct MaxHeap* maxHeap = createMaxHeap();
    insert(maxHeap, 10);
    insert(maxHeap, 20);
    insert(maxHeap, 15);
    insert(maxHeap, 30);
    printMaxHeap(maxHeap);
    increaseKey(maxHeap, 2, 25);
    printMaxHeap(maxHeap);
    return 0;
}
*/