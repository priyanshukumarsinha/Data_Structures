int menu(){
    int choice;
    printf("\n~~~MENU~~~\n");
    printf("\n1. Add Value in the List at the End");
    printf("\n2. Add Value in the List at the Beginning");
    printf("\n3. Add Value in the List at a Particular Position");
    
    printf("\n4. Delete First Node from the List");
    printf("\n5. Delete Last Node from the List");
    printf("\n6. Delete a Particular Node");

    printf("\n7. View List");
    printf("\n8. Exit");
    printf("\n\nEnter Your Choice : ");
    scanf("%d", &choice);

    return choice;
}