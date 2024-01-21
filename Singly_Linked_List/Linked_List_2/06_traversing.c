// Tranversing means to access node values 

void viewList(){
    struct Node *t;
    if(head == NULL)
        printf("\nNo elements to Display\n");
    else{
        t=head;
        while(t!= NULL){
            printf("\n%d", t->info);
            t = t->link;
        }

    }
}