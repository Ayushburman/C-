#include <stdio.h>

#define SIZE 10

// Hash Table
int hashTable[SIZE];

// Initialize hash table
void initialize() {

    for(int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Hash Function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert into hash table
void insert(int key) {

    int index = hashFunction(key);

    // Linear Probing
    while(hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;

    printf("%d inserted at index %d\n", key, index);
}

// Search element
void search(int key) {

    int index = hashFunction(key);
    int start = index;

    while(hashTable[index] != -1) {

        if(hashTable[index] == key) {
            printf("%d found at index %d\n", key, index);
            return;
        }

        index = (index + 1) % SIZE;

        if(index == start)
            break;
    }

    printf("%d not found\n", key);
}

// Display hash table
void display() {

    printf("\nHash Table:\n");

    for(int i = 0; i < SIZE; i++) {

        if(hashTable[i] == -1)
            printf("[%d] -> EMPTY\n", i);
        else
            printf("[%d] -> %d\n", i, hashTable[i]);
    }
}

int main() {

    initialize();

    insert(10);
    insert(20);
    insert(15);
    insert(25);

    display();

    search(15);
    search(50);

    return 0;
}
