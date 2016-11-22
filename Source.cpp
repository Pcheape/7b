#include"StackOfDoubleList.h"
#include "StackList.h"
#include <iostream>
#include<queue>
#include<vector>
#include<list>

int main()
{
	StackOfDoubleList bing;
	bing.push(1.2);
	bing.push(1.3);
	bing.printStack();
	std::cout << "Current stack" <<std::endl;
	bing.pop();
	bing.printStack();
	std::cout << bing << "here";
	std::cout << "Current stack pop 1 "<<std::endl ;
	std::cout << "Current stack pop 2 " << std::endl;
	
	bing.pop();
	bing.printStack();
	


	if (bing.isEmpty())
	{
		std::cout << "Stack is empty"<<std::endl;

	}
	else {
		bing.printStack();
	}
	

	StackList stlList;
	stlList.push(1.1);
	stlList.push(1.2);
	stlList.pop();

	system("pause");

	
}