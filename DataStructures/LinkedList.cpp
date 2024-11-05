#include "LinkedList.h"

void add(ListNode** head, int value) {
	ListNode* newNode = new ListNode;
	newNode->value = value;
	newNode->next = *head;
	*head = newNode;
}

void remove(ListNode** head) {
	ListNode* toRemove = *head;
	*head = (*head)->next;
	delete toRemove;
}