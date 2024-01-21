void viewList(){
    struct Node *n;
    if(head == NULL){
        printf("\nNo Elements to Display\n");
    }
    else{
        n=head;
        while(n!=NULL){
            printf("%d\t", n->info);
            n=n->next;
        }
    }
}


