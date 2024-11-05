#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode
{
	int value;
	ListNode* next;
} ListNode;

void add(ListNode** head, int value);

void remove(ListNode** head);

#endif
