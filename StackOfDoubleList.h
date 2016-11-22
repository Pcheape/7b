#pragma once
#include "ListOfDoubles.h"
#include <ostream>

class StackOfDoubleList {
		public:
			StackOfDoubleList();
			void push(double val);
			bool pop();
			bool isEmpty() const;
			void printStack();
			friend std::ostream & operator<<(std::ostream& str, const StackOfDoubleList &stackobj);

	private:
		ListOfDoubles s;
	};
