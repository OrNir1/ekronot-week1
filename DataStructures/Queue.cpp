#include "Queue.h"

#define INITIAL_AMOUNT_ITEMS 0
#define EMPTY_DEQUEUE_RETURN -1

void initQueue(Queue* q, unsigned int size){
	int *queue = new int[size];
	q->arr = queue;
	q->length = size;
	q->count = INITIAL_AMOUNT_ITEMS;
}

void cleanQueue(Queue* q){
	delete[] q->arr;
}


/*
The function adds an item to the queue by pushing it to the start
Time: O(n) - n being the current amount of items in the queue
*/
void enqueue(Queue* q, unsigned int newValue){
	for (int i = q->count;i > 0;i--) {
		q->arr[i] = q->arr[i - 1];
	}
	q->arr[0] = newValue;
	q->count++;
}

/*
The function removes an item from the queue and returns it
Time: O(1)
*/
int dequeue(Queue* q) {
	int temp = 0;
	if (q->count > 0) {
		temp = q->arr[q->count - 1];
		q->arr[q->count - 1] = 0;
		q->count--;
		return temp;
	}
	else {
		return EMPTY_DEQUEUE_RETURN;
	}
} 

bool isEmpty(Queue* s){
	return s->count == 0;
}


bool isFull(Queue* s) {
	return s->count == s->length;
}