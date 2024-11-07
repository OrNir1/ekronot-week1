#include "LinkedList.h"


/*
This function adds a new item to the head of the linked list
Input: pointer to pointer of list head, new integer to add
*/
void add(ListNode** head, int value) {
	ListNode* newNode = new ListNode;
	newNode->value = value;
	newNode->next = *head;
	*head = newNode;
}

/*
This function removes the first node in the linked list
Input: pointer to pointer to list head
*/
void remove(ListNode** head) {
	ListNode* toRemove = *head;
	*head = (*head)->next;
	delete toRemove;
}