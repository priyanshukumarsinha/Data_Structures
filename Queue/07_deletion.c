int deQueue(struct Queue *q){
    if(q){
        int data;
        if(isEmptyQueue(q)){
            printf("\nNo Elements to Delete");
            return 0;
        }
        else{
            data = q->array[q->front];

            // if only 1 element is there in queue
            if(q->front == q->rear)
                q->front = q->rear - 1;
            else
                q->front = (q->front + 1) % q->capacity;
        }

        return data;
    }
    else{
        printf("\nQueue Does not Exist");
    }
}

void deleteQueue(struct Queue *q){
    if(q){
        if(q->array){
            free(q->array);
        }
        free(q);
    }
    else{
        printf("\nQueue Does not Exist");
    }
}