//Find the Nth node of list from end of the list.
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to find the Nth node from the end of the list
struct Node* findNthFromEnd(struct Node* head, int N) {
    struct Node *first = head, *second = head;

    // Move the first pointer N nodes ahead
    for (int i = 0; i < N; i++) {
        if (first == NULL) {
            return NULL; // N is greater than the number of nodes
        }
        first = first->next;
    }

    // Move both pointers until the first pointer reaches the end
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    return second; // second now points to the Nth node from the end
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    int N = 2;
    struct Node* nthNode = findNthFromEnd(head, N);

    if (nthNode != NULL) {
        printf("The %dth node from the end is: %d\n", N, nthNode->data);
    } else {
        printf("The list has fewer than %d nodes.\n", N);
    }

    // Print the entire list
    printList(head);

    // Free the allocated memory (cleanup)
    struct Node* current = head;
    struct Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}
    