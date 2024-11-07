#include "Utils.h"

void reverse(int* nums, unsigned int size){
	Stack* s = new Stack;
	initStack(s);
	for (int i = 0;i < size;i++) {
		push(s, nums[i]);
	}
	for (int i = 0; i < size;i++) {
		*(nums + i) = pop(s);
	}
}

int* reverse10(){
	return nullptr;
}