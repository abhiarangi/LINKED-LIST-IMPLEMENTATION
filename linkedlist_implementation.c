#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL; // Global head pointer

void insert(int data, int position) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (position == 0) { // Insert at beginning
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node *temp = head;
    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void delete(int position) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    if (position == 0) { // Delete first node
        head = temp->next;
        free(temp);
        return;
    }

    struct Node *prev = NULL;
    for (int i = 0; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void traverse() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void freeList() {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    insert(10, 0);
    insert(20, 1);
    insert(30, 2);
    insert(40, 1);
    traverse(); 
    printf("after deleting 20:\n ");
    delete(2);
    traverse(); // Output: Linked List: 10 -> 40 -> 30 -> NULL
    delete(0);
    printf("after deleting 10:\n ");
    traverse(); // Output: Linked List: 40 -> 30 -> NULL 
    printf("after deleting all elements:\n ");
    freeList();
    traverse(); // Output: List is empty.
    head = NULL; //set head to null.

    return 0;
}