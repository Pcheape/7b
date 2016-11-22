#include "StackOfDoubleList.h"
#include <iostream>

StackOfDoubleList::StackOfDoubleList()
{}

void StackOfDoubleList::push(double val){
	s.insert(val);
}
bool StackOfDoubleList::pop(){
	
	return s.deleteMostRecent();
}
bool StackOfDoubleList::isEmpty() const
{
	return s.isEmpty();
}
void StackOfDoubleList::printStack(){
	s.displayList();
}


std::ostream & operator<<(std::ostream& str, const StackOfDoubleList &stackobj) {
	while (!stackobj.s.isEmpty())
	{
		str << stackobj.s.PrintPop();
	}
	
	return str;
}

