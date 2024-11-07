#include "Queue.h"

#define INITIAL_AMOUNT_ITEMS 0
#define EMPTY_DEQUEUE_RETURN -1

/*
This function initializes a queue of size 'size'
Input: pointer to Queue struct 'q', integer 'size'
*/
void initQueue(Queue* q, unsigned int size){
	int *queue = new int[size];
	q->arr = queue;
	q->length = size;
	q->count = INITIAL_AMOUNT_ITEMS;
	q->start = 0;
	q->end = -1;
}

/*This function cleans the queue by 'freeing' it*/
void cleanQueue(Queue* q){
	delete[] q->arr;
}

/*
The function adds an item to the queue by pushing it to the start
Time: O(1)
*/
void enqueue(Queue* q, unsigned int newValue){
	q->end = (q->end + 1) % q->length;
	q->arr[q->end] = newValue;
	q->count++;
}

/*
The function removes an item from the queue and returns it
Time: O(1)
*/
int dequeue(Queue* q) {
	int temp = 0;
	if (q->count > 0) {
		temp = q->arr[q->start];
		q->arr[q->start] = 0;
		q->count--;
		q->start = (q->start + 1) % q->length;
		return temp;
	}
	else {
		return EMPTY_DEQUEUE_RETURN;
	}
} 

/*Checks if a queue is empty*/
bool isEmpty(Queue* s){
	return s->count == 0;
}

/*Checks if a queue is full*/
bool isFull(Queue* s) {
	return s->count == s->length;
}