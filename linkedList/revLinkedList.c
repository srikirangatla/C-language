#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}node;

node *createNode (int data) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append (node **headRef, int data) {
    node *newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    node *temp = *headRef;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void printList(node *head) {
    node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void revLL(node **head) {
    node *pre, *ptr, *next;
    pre = NULL;
    ptr = *head;
    next = NULL;
    while (ptr != NULL) {
        next = ptr->next;
        ptr->next = pre;
        pre = ptr;
        ptr = next;
    }
    *head = pre;
}

int main(void) {
    node *head = NULL;

    append(&head, 3);
    append(&head, 4);
    append(&head, 8);
    append(&head, 2);
    append(&head, 7);

    printList(head);

    revLL(&head);

    printList(head);

    return 0;
}

/*
3 4 8 2 7 
7 2 8 4 3 
*/