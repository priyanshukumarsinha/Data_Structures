// Insertion at the End
void insertAtEnd(){
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
    end++;
}

// Insertion at the beginning
void insertAtBeginning(){
    struct Node *temp;
    temp = createNode();

    printf("\nEnter Data to be Stored : \n");
    scanf("%d", &temp->info);   // Lets Store some data in that node

    if(head == NULL)
        head = temp;
    else{
        temp->link= head;
        head = temp;
    }
    end++;

}


// Insert at a Particular Position 
void insertAtPos(){
    struct Node *temp, *t, *r;
    temp = createNode();
    int pos;

    printf("\nEnter the Position: ");
    scanf("%d", &pos);

    printf("\nEnter Data to be Stored : ");
    scanf("%d", &temp->info);   // Lets Store some data in that node

    t=head;
    while(pos>=0||pos<=end){
        if (pos == 0)
        {
            temp->link = head;
            head = temp;
            break;
        }
        else if(pos-1==0){
            r = t->link;
            temp->link=r;
            t->link=temp;
            break;
        }
        else{
            t = t->link;
            pos--;
        }
    }

}