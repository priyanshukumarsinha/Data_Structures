// Delete First Node 
void deleteFirstNode(){
    struct Node *r; // pointer to store the address of next element

    if(head == NULL) //check for underflow
        printf("\nNo elements to delete\n");
    else{
        r = head->link; // put the link of second element in r
        free(head);     // free the element having address of first element (i.e free first element memory)
        head = r;       // put the address of second element stored in r in head (now second element becomes the first element)
    }
}

// Delete Last Node
void deleteLastNode(){
    struct Node *t, *r;
    if(head == NULL) //check for underflow
        printf("\nNo elements to delete\n");
    else{
        t=head;
        while(t->link!=NULL){
            r=t;
            t=t->link;
        }
        free(t);
        r->link = NULL;
    }

}

// Delete Particular Node
void deleteNode(){
    struct Node *t,*r;
    int pos;
    printf("\nEnter the position of element you want to delete : ");
    scanf("%d", &pos);

    if(head == NULL) //check for underflow
        printf("\nNo elements to delete\n");
    else{
        t=head;
        while(pos>=0||pos<=end){
            if(pos==0){
                r->link = t->link;
                free(t);
                break;
            }
            else{
                r=t;
                t=t->link;
                pos--;
            }
        }
    }
}