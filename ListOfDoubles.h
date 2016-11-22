#pragma once
#include "DoubleListNode.h"


class ListOfDoubles {
public:
	ListOfDoubles();
	~ListOfDoubles();
	void insert(double);
	void displayList() const;
	bool deleteMostRecent() ;
	int deleteDouble(int);

	double ListOfDoubles::PrintPop() const;
	bool isEmpty() const;


private:
    DoubleListNode* head;
};
