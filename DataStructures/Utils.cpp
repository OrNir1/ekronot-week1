#include "Utils.h"

#include <iostream>
#include "Stack.h"

#define REVERSE_10_SIZE 10

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
	int* nums = new int[REVERSE_10_SIZE];
	for (int i = 0;i < REVERSE_10_SIZE;i++) {
		std::cout << "Enter num " << i + 1 << ": ";
		std::cin >> nums[i];
	}
	reverse(nums, REVERSE_10_SIZE);
	return nums;
}