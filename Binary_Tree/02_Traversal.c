#include "01_structure.c"
#include "./Queue/01_structure.c"

// Pre Order Traversal
    // Step 1 : Process Root R
    // Step 2 : Process Left Subtree of R in PreOrder
    // Step 3 : Process Right Subtree of R in PreOrder
void preOrder(struct Node *root){
    if(root){
        printf("%d", root->info);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// In Order Traversal
    // Step 1 : Process Left Subtree of R in inOrder
    // Step 2 : Process Root R
    // Step 3 : Process Right Subtree of R in inOrder
void inOrder(struct Node *root){
    if(root){
        inOrder(root->left);
        printf("%d", root->info);
        inOrder(root->right);
    }
}

// Post Order Traversal
    // Step 1 : Process Left Subtree of R in inOrder
    // Step 2 : Process Right Subtree of R in inOrder
    // Step 3 : Process Root R
void postOrder(struct Node *root){
    if(root){
        inOrder(root->left);
        inOrder(root->right);
        printf("%d", root->info);
    }
}

// Level Order Traversal
void levelOrder(struct Node *root){
    struct Node *temp;
    struct Queue *Q;
}