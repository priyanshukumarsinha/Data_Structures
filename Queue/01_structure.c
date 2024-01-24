// Array Implementation of Queue
#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int front, rear;
    int capacity;
    int *array;
};