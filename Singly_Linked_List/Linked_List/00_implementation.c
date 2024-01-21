#include "01_structure.c"
#include "02_operations.c"
#include "07_menu.c"


int main(){
    while(1){
        int ch = menu();
        switch (ch)
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewList();
            break;
        case 4: 
            exit(0);
        default:
            printf("\nInvalid Entry!\n");
            continue;
        }
    }

    return 0;
}