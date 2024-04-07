/*

//Double Linked list with Delete
#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    }
    else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    }
    else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prevNode = NULL;
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        printf("Node with data %d deleted from the list.\n", key);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prevNode = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Key %d not found in the list. No deletion performed.\n", key);
        return;
    }
    prevNode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = prevNode;
    free(temp);
    printf("Node with data %d deleted from the list.\n", key);
}
void printList(struct Node* head) {
    printf("Doubly Linked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    printList(head);
    deleteNode(&head, 30);
    printList(head);
    deleteNode(&head, 10);
    printList(head);
    deleteNode(&head, 50);
    printList(head);
    deleteNode(&head, 60);
    return 0;
}

*/