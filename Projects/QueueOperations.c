#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// INSERT / ENQUEUE
void enqueue(int value) {

    if(rear == SIZE - 1) {
        printf("Queue Overflow\n");
    }
    else {

        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted into queue\n", value);
    }
}

// DELETE / DEQUEUE
void dequeue() {

    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
    }
    else {

        printf("%d deleted from queue\n", queue[front]);
        front++;

    }
}

// PEEK Operation
void peek() {

    if(front == -1 || front > rear) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Front Element = %d\n", queue[front]);
    }
}

// DISPLAY Queue
void display() {

    if(front == -1 || front > rear) {
        printf("Queue is Empty\n");
    }
    else {

        printf("Queue Elements:\n");

        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

// SEARCH Element
void search(int value) {

    int found = 0;

    for(int i = front; i <= rear; i++) {

        if(queue[i] == value) {
            printf("%d found at position %d\n", value, i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("%d not found in queue\n", value);
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    search(20);

    dequeue();

    display();

    return 0;
}
