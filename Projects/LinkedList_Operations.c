#include <stdio.h>
#include <stdlib.h>

// Node Structure
struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// INSERT AT END
void insert(int value) {

    struct Node *newNode, *temp;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
    }
    else {

        temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("%d inserted\n", value);
}

// DISPLAY LINKED LIST
void display() {

    struct Node *temp = head;

    if(head == NULL) {
        printf("Linked List is Empty\n");
        return;
    }

    printf("Linked List:\n");

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// SEARCH ELEMENT
void search(int value) {

    struct Node *temp = head;
    int pos = 1;

    while(temp != NULL) {

        if(temp->data == value) {
            printf("%d found at position %d\n", value, pos);
            return;
        }

        temp = temp->next;
        pos++;
    }

    printf("%d not found\n", value);
}

// DELETE NODE
void delete(int value) {

    struct Node *temp = head;
    struct Node *prev = NULL;

    if(head == NULL) {
        printf("List is Empty\n");
        return;
    }

    // Delete first node
    if(head->data == value) {
        head = head->next;
        free(temp);
        printf("%d deleted\n", value);
        return;
    }

    // Find node
    while(temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("%d not found\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("%d deleted\n", value);
}

// COUNT NODES
void count() {

    struct Node *temp = head;
    int c = 0;

    while(temp != NULL) {
        c++;
        temp = temp->next;
    }

    printf("Total Nodes = %d\n", c);
}

// REVERSE LINKED LIST
void reverse() {

    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next = NULL;

    while(curr != NULL) {

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    printf("Linked List Reversed\n");
}

int main() {

    insert(10);
    insert(20);
    insert(30);

    display();

    search(20);

    count();

    delete(20);

    display();

    reverse();

    display();

    return 0;
}
