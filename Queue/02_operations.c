// Operations
// 1. Create Queue 
    #include "03_createQueue.c"
    struct Queue * createQueue();
// 2. Check if Queue is Empty
    #include "04_checkQueue.c"
    int isEmptyQueue(struct Queue *);
// 3. Check if Queue is Full
    int isFullQueue(struct Queue *);
// 4. return total capacity of Queue
    #include "05_queueSize.c"
    int queueSize(struct Queue *);
// 5. Insertion of Element in a Queue 
    #include "06_insertion.c"
    void enQueue(struct Queue *, int e);
// 6. Deletion of Element from a Queue 
    #include "07_deletion.c"
    int deQueue(struct Queue *);
// 7. Delete Queue 
    void deleteQueue(struct Queue *);
// 8. View Queue
    #include "09_viewQueue.c"
    void viewQueue(struct Queue *);