#include "StackPriorityQueue.h"

void StackPriorityQueue::push(double val) {
	vec.push_back(val);
}

void StackPriorityQueue::pop() {
	vec.pop_back();
}