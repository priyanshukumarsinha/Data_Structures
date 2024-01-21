#include "04_createNode.c"

// Insertion At the Beginning
void insertAsFirstNode(){
    struct Node *n;
    n = createNode();
    printf("\nEnter Value to be Stored : ");
    scanf("%d", &n->info);
    if(head == NULL){
        head = n;
    }
    else{
        n->next = head;
        head->prev=n;
        head = n;
    }
}