/*

//Binary Tree traversals-LevelOrder
#include <stdio.h>

#include <stdlib.h>
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct QueueNode {
    struct TreeNode* data;
    struct QueueNode* next;
};
struct Queue {
    struct QueueNode* front, * rear;
};
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct QueueNode* createQueueNode(struct TreeNode* data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}
int isEmpty(struct Queue* queue) {
    return queue->front == NULL;
}
void enqueue(struct Queue* queue, struct TreeNode* data) {
    struct QueueNode* newNode = createQueueNode(data);
    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    }
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}
struct TreeNode* dequeue(struct Queue* queue) {
    if (isEmpty(queue)) return NULL;
    struct QueueNode* temp = queue->front;
    struct TreeNode* data = temp->data;
    queue->front = queue->front->next;
    free(temp);
    return data;
}
void levelOrderTraversal(struct TreeNode* root) {
    if (root == NULL) return;
    struct Queue* queue = createQueue();
    enqueue(queue, root);
    while (!isEmpty(queue)) {
        struct TreeNode* current = dequeue(queue);
        printf("%d ", current->val);

        if (current->left != NULL)
            enqueue(queue, current->left);
        if (current->right != NULL)
            enqueue(queue, current->right);
    }
    free(queue);
}
int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Level Order Traversal of the binary tree:\n");
    levelOrderTraversal(root);

    return 0;
}
*/