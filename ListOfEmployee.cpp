#include "ListOfEmployee.h"
#include "EmployeeListNode.h"
#include <string>
#include <iostream>
using namespace std;

 ListOfEmployee::ListOfEmployee()
	:head(NULL)
{}

 ListOfEmployee::~ListOfEmployee()
 {
	 EmployeeListNodePtr temp = head;
	 while (temp != NULL)
	 {
		 deleteMostRecent();
		 temp = head;
	 }

	 delete temp;
	 delete head;
 }

void ListOfEmployee::insert(string nameIn,double salary) {
	
	EmployeeListNode *newNode = new EmployeeListNode(nameIn,salary);
	newNode->next = head;
	head = newNode;	
}

void ListOfEmployee::display() {

	EmployeeListNodePtr temp = head;
	while (temp != NULL)
	{
		std::cout << temp->emp.name << temp->emp.salary  << std::endl;
		temp = temp->next;
	}
}

void  ListOfEmployee::deleteMostRecent() {

	if (head != NULL)
	{
		EmployeeListNodePtr temp = head;

		head = temp->next;
		delete temp;
	}

}

void  ListOfEmployee::getSalary(string name) {

	EmployeeListNodePtr temp = head;
	while (temp != NULL)
	{
		if (temp->emp.name == name)
		{
			cout << temp->emp.salary <<endl;
			break;
		}
		else {
			temp = temp->next;
		}
	}

}