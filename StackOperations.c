#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// PUSH Operation
void push(int value) {

    if(top == SIZE - 1) {
        printf("Stack Overflow\n");
    }
    else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// POP Operation
void pop() {

    if(top == -1) {
        printf("Stack Underflow\n");
    }
    else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// DISPLAY Stack
void display() {

    if(top == -1) {
        printf("Stack is Empty\n");
    }
    else {
        printf("Stack Elements:\n");

        for(int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {

    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}
