void deleteFirstNode(){
    struct Node *n;
    if(head==NULL){
        printf("\nNo Elements to Delete\n");
    }
    else{
        n = head->next;
        n->prev = NULL;
        free(head);
        head = n;
    }
}