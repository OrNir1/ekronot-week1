#include "Queue.h"
#include <iostream>

#define QUEUE_SIZE 5


int main() {
	Queue* q = new Queue;
	initQueue(q, QUEUE_SIZE);
	if (isEmpty(q)) {
		std::cout << "Queue is empty as expected" << std::endl;
	}
	for (int i = 1;i <= QUEUE_SIZE;i++) {
		enqueue(q, i * i);
	}
	if (isFull(q)) {
		std::cout << "Queue is full as expected" << std::endl;
	}
	dequeue(q);
	std::cout << q->start << " - " << q->end << " - " << q->count  << std::endl;
	enqueue(q, 1);
	std::cout << q->start << " - " << q->end << " - " << q->count << std::endl;
	while (!isEmpty(q)) {
		std::cout << dequeue(q) << ", ";
	}
	std::cout << std::endl;
	cleanQueue(q);

	return 0;

}