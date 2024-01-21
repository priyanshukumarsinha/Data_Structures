#include "01_structure.c"
#include "02_operations.c"
#include "07_menu.c"


int main(){
    while(1){
        int ch = menu();
        switch (ch)
        {
        case 1:
            insertAtEnd();
            break;
        case 2:
            insertAtBeginning();
            break;
        case 3:
            insertAtPos();
            break;
        case 4:
            deleteFirstNode();
            break;
        case 5:
            deleteLastNode();
            break;
        case 6:
            deleteNode();
            break;
        case 7:
            viewList();
            break;
        case 8: 
            exit(0);
        default:
            printf("\nInvalid Entry!\n");
            continue;
        }
    }


    return 0;
}