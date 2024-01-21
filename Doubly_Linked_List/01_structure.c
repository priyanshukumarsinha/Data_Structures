#include <stdio.h>
#include <stdlib.h>

// Doubly Linked list contains two links, where on of the link is for the next element and the other one for the previous element
// traversing can be done from both sides

struct Node{
    int info;
    struct Node *prev,*next;
};

struct Node *head = NULL;