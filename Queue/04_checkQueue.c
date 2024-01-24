int isEmptyQueue(struct Queue *q){
    return (q->front==-1);
}

int isFullQueue(struct Queue *q){
    return ((q->rear+1)%(q->capacity)==q->front);
}