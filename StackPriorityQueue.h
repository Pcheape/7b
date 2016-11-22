#pragma once
#include <vector>
class StackPriorityQueue {
	
	
	public:
		void push(double val);
		
		void pop() ;
		
	private:
		std::vector<double>  vec;
	};

