    void enQueue(struct Queue *q, int data){
        if(q){
            if(isFullQueue(q)){
                printf("\nQueue is Full (Queue Overflow)\n");
                return;
            }
            else{
                q->rear = (q->rear+1) % q->capacity;
                q->array[q->rear] = data;

                // If it is the first element in the queue (now front = rear = 0)
                if(q->front == -1)
                    q->front = q->rear;
            }
        }
        else{
            printf("\nQueue Does not Exist");
        }
    }