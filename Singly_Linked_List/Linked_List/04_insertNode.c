// Insertion at the End
void insertNode(){
    struct Node *temp,*t;
    temp = createNode(); //to insert a node we first need to create a Node

    if(head == NULL) // if it is the first element
        head = temp;
    else{           // if it is not the first element
        t = head;

        while (t->link != NULL) //check for the last element
        {
            t = t->link;        // increment the address of node after each search
        }
        t->link = temp;         // put the address of new node in the last node's link

    }

    temp->link = NULL;          // again the last node (i.e the new Node) has its link as NULL
    printf("\nEnter Data to be Stored : \n");
    scanf("%d", &temp->info);   // Lets Store some data in that node
}