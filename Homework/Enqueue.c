/*

//Circular Queue with Enqueue
#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 5
struct CircularQueue {
    int array[MAX_SIZE];
    int front, rear;
    int size;
};
struct CircularQueue* createCircularQueue() {
    struct CircularQueue* queue = (struct CircularQueue*)malloc(sizeof(struct CircularQueue));
    if (queue == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    queue->front = queue->rear = -1;
    queue->size = 0;
    return queue;
}
int isFull(struct CircularQueue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}
int isEmpty(struct CircularQueue* queue) {
    return queue->size == 0;
}
void enqueue(struct CircularQueue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(queue))
        queue->front = 0;
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->array[queue->rear] = item;
    queue->size++;
    printf("%d enqueued to the queue\n", item);
}

int main() {
    struct CircularQueue* queue = createCircularQueue();
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
    return 0;
}
*/