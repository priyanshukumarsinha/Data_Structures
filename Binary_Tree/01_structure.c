#include<stdio.h>

// structure of a binary tree 
struct Node{
    int info;
    struct Node *left, *right;
};


// Root is a node pointer Variable to point root node of the tree 
struct Node *root = NULL; // when root contains null, tree is empty