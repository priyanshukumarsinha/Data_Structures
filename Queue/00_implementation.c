#include "01_structure.c"
#include "02_operations.c"
#include "08_menu.c"

int main(){
    int ch;
    struct Queue *q;
    int data;
    while (1){
        ch = menu();
        switch (ch)
        {
            case 1:
                printf("\nEnter Size of Queue to be Created : ");
                scanf("%d", &data);
                q = createQueue(data);
                break;
            case 2: 
                printf("\nEnter Data you want to store in array : ");
                scanf("%d", &data);
                enQueue(q, data);
                break;
            case 3:
                deQueue(q);
                break;
            case 4:
                deleteQueue(q);
                break;
            case 5:
                viewQueue(q);
                break;
            case 6:
                exit(0);    
            default:
                printf("\nInvalid Entry!!\n\n");
                break;
        }
        g
    }

    return 0;
}