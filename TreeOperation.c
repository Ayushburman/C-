#include <stdio.h>
#include <stdlib.h>

// Tree Node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Create New Node
struct Node* createNode(int value) {

    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert Node
struct Node* insert(struct Node *root, int value) {

    if(root == NULL) {
        return createNode(value);
    }

    if(value < root->data) {
        root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder Traversal
void inorder(struct Node *root) {

    if(root != NULL) {

        inorder(root->left);

        printf("%d ", root->data);

        inorder(root->right);
    }
}

// Preorder Traversal
void preorder(struct Node *root) {

    if(root != NULL) {

        printf("%d ", root->data);

        preorder(root->left);

        preorder(root->right);
    }
}

// Postorder Traversal
void postorder(struct Node *root) {

    if(root != NULL) {

        postorder(root->left);

        postorder(root->right);

        printf("%d ", root->data);
    }
}

// Search Node
void search(struct Node *root, int value) {

    if(root == NULL) {
        printf("%d not found\n", value);
        return;
    }

    if(root->data == value) {
        printf("%d found in tree\n", value);
        return;
    }

    if(value < root->data)
        search(root->left, value);
    else
        search(root->right, value);
}

int main() {

    struct Node *root = NULL;

    // Insert Nodes
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // Display Traversals
    printf("Inorder Traversal:\n");
    inorder(root);

    printf("\n\nPreorder Traversal:\n");
    preorder(root);

    printf("\n\nPostorder Traversal:\n");
    postorder(root);

    // Search
    printf("\n\n");
    search(root, 60);
    search(root, 100);

    return 0;
}
