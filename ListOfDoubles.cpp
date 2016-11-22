#include "ListOfDoubles.h"
#include "DoubleListNode.h"
#include <iostream>

ListOfDoubles::ListOfDoubles()
	:head(NULL)
{}

ListOfDoubles::~ListOfDoubles()
{
DoubleListNodePtr temp = head;
while (temp != NULL)
{
	deleteMostRecent();
	temp = head;
}

delete temp;
delete head;
}

void ListOfDoubles::insert(double dataIn) {
	DoubleListNodePtr newNode = new DoubleListNode(dataIn);
	
		newNode->next = head;
		head = newNode;
}
 void ListOfDoubles::displayList()const {
	DoubleListNodePtr temp = head;


	while (temp != NULL)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}
}
bool ListOfDoubles::deleteMostRecent() {
	
	if (head != NULL)
	{
		DoubleListNodePtr temp = head;
		head = temp->next;
		
		delete temp;
		return true;
	}
	return false;
}

double ListOfDoubles::PrintPop() const {
	double data;
	if (head != NULL)
	{
		
		data = head->data;
	
	}
	return data;
}

int ListOfDoubles::deleteDouble(int pos) {

	DoubleListNodePtr currentNode = head;
	DoubleListNodePtr nextNode = head->next;

	int found = 0;
	while (nextNode != NULL)
	{
		
		pos--;
		if (pos - 1 == 0)
		{
			if (nextNode != NULL)
			{
				currentNode->next = nextNode->next;
				delete(nextNode);
				found = 1;
				break;
			}
		}
		else {
			currentNode = nextNode;
			nextNode = currentNode->next;
		}

	}


	return found;
}

bool ListOfDoubles::isEmpty() const {
	return (head == NULL);
}