#pragma once
#include <list>
class StackList {
	
	public:
		void push(double val);
		
		void pop() ;
		
	private:
		std::list<double>  s;
	};