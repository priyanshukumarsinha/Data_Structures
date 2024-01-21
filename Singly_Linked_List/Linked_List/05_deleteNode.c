// Delete First Node 
void deleteNode(){
    struct Node *r; // pointer to store the address of next element

    if(head == NULL) //check for underflow
        printf("\nNo elements to delete\n");

    else{
        r = head->link; // put the link of second element in r
        free(head);     // free the element having address of first element (i.e free first element memory)
        head = r;       // put the address of second element stored in r in head (now second element becomes the first element)
    }
}