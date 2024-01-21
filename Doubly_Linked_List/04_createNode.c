struct Node* createNode(){
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));

    n->prev = NULL;
    n->next = NULL;

    return n;
}