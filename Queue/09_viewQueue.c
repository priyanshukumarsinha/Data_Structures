void viewQueue(struct Queue *q){
    int i;

    if(q){
        if(isEmptyQueue(q)){
            printf("\nNo elements to Display");
        }
        else{
            printf("Front[%d]->", q->front);
            for(i=q->front; i!= (q->rear); i = (i+1)%(q->capacity)){
                printf("%d ", q->array[i]);
            }
            printf("%d <-Rear[%d]", q->array[q->rear], q->rear);
        }
    }
    else{
        printf("\nQueue Does not Exist");
    }
}