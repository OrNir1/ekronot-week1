#include "Stack.h"
#include "LinkedList.h"


/*
This function pushes a new element to the start of a stack using the LinkedList add function
Input: Stack pointer 's', integer 'element'
*/
void push(Stack* s, unsigned int element){
	add(s->head, element);
}

/*
This function pops the first elemnt in a stack using the LinkedList remove function
Input: Stack pointer 's'
Output: the first item in a stack or -1 if empty
*/
int pop(Stack* s) {
	if (!isEmpty(s)) {
		int num = (*(s->head))->value;
		remove(s->head);
		return num;
	}
	else 
	{
		return -1;
	}
} // Return -1 if stack is empty



/*
Initializes a stack by making the head of the stack a ListNode** and making it's content a nullptr
causing the list to exist but appear empty
Input: pointer to Stack struct 's'
*/
void initStack(Stack* s) {
	s->head = new ListNode*;
	*(s->head) = nullptr;
}


/*
Frees the memory used by the stack and resets the head to nullptr
Input: pointer to Stack struct 's'
*/
void cleanStack(Stack* s){
	ListNode* next = nullptr;
	ListNode* curr = *(s->head);
	ListNode* temp = nullptr;
	while (curr) {
		temp = curr->next;
		delete curr;
		curr = temp;
	}
	*(s->head) = nullptr;
}

/*
Stack is empty if head is nullptr
*/
bool isEmpty(Stack* s) {
	return *(s->head) == nullptr;
}