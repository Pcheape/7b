#include "StackList.h"
#include <iostream>
	
		void StackList::push(double val)
		{
			s.push_back(val);
		}
		void StackList::pop() {
			s.pop_front() ;
		}
	
		
	
	