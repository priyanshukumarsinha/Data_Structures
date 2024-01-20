#include<stdio.h>
#include<stdlib.h>

// What is a Linked List?

int end=-1;

struct Node{
    int info; //this contains the data of the NODE
    struct Node *link; // this contains the link of next node // initially it should be NULL
};

struct Node *head = NULL; // this tells that there is no element in linked list
// this head pointer will point to the first element of the Linked List

