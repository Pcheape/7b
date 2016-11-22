#pragma once
class DoubleListNode {
	friend class ListOfDoubles;
public:
	DoubleListNode(double);

private:
	double data;
	DoubleListNode *next;
};
typedef DoubleListNode* DoubleListNodePtr;


