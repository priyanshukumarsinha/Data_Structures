int queueSize(struct Queue *q){
    return ((q->capacity - (q->front + q->rear + 1)) % q->capacity);
}