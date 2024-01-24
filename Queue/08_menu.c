int menu(){
    int choice;

    printf("\n\n~~~MAIN MENU~~~\n");
    printf("\n1. Create a Queue of capacity given");
    printf("\n2. Add elements to the Queue");
    printf("\n3. Delete elements from Queue");
    printf("\n4. Delete Queue");
    printf("\n5. View Queue");
    printf("\n6. Exit");

    printf("\n\nEnter Your Choice : ");
    scanf("%d", &choice);

    return choice;
}