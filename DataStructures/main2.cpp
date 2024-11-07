#include "Utils.h"
#include <iostream>

using std::cout;
using std::endl;

#define NUMS_SIZE 5

void printArray(int* arr, int size) {
	for (int i = 0;i < size;i++) {
		cout << arr[i];
	}
	cout << endl;
}


int main() {
	int nums[NUMS_SIZE] = { 1,2,3,4,5 };
	printArray(nums, NUMS_SIZE);
	reverse(nums, NUMS_SIZE);
	printArray(nums, NUMS_SIZE);

	int* arr = reverse10();
	printArray(arr, 10);

	return 0;
}
