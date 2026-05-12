#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// ENQUEUE Operation
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

// DEQUEUE Operation
void dequeue() {

    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
    }
    else {

        printf("%d removed from queue\n", queue[front]);
        front++;

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

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}
