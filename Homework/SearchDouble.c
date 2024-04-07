
/*
//Double Linked list with Search
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
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prevNode = NULL;
    while (current != NULL && current->data != key) {
        prevNode = current;
        current = current->next;
    }
    if (current == NULL) {
        printf("Node with key %d not found. Cannot delete.\n", key);
        return;
    }
    if (prevNode == NULL)
        *head = current->next;
    else
        prevNode->next = current->next;

    if (current->next != NULL)
        current->next->prev = prevNode;

    free(current);
    printf("Node with key %d deleted successfully.\n", key);
}
struct Node* search(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key)
            return head;
        head = head->next;
    }
    return NULL;
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
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printList(head);
    int keyToSearch = 20;
    struct Node* foundNode = search(head, keyToSearch);
    if (foundNode != NULL)
        printf("Node with key %d found.\n", keyToSearch);
    else
        printf("Node with key %d not found.\n", keyToSearch);
    int keyToDelete = 20;
    deleteNode(&head, keyToDelete);
    printList(head);
    return 0;
}
*/