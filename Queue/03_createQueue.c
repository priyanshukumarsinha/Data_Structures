struct Queue * createQueue(int capacity){
    struct Queue *q;
    q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = -1;
    q->capacity = capacity;
    q->array = malloc(sizeof(sizeof(int)*capacity));

    // Check if the array was allocated memory or not
    if(!(q->array))
        return NULL; // if array does not exists return NULL

    return q;
}

