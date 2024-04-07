/*

//Circular Queue with Dequeue
#include <stdio.h>

#include <stdlib.h>
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
int dequeue(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow\n");
        exit(1);
    }
    int item = queue->array[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front = (queue->front + 1) % MAX_SIZE;
    queue->size--;
    return item;
}
int main() {
    struct CircularQueue* queue = createCircularQueue();
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    printf("%d dequeued from queue\n", dequeue(queue));
    printf("%d dequeued from queue\n", dequeue(queue));
    printf("%d dequeued from queue\n", dequeue(queue));
    return 0;
}
*/