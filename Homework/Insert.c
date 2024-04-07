/*
//Binary Max Heap with Insert
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
    return 0;
}
*/