#pragma once
#include <string>
#include "EmployeeListNode.h"
class ListOfEmployee {
public:
	ListOfEmployee();
	~ListOfEmployee();
	void insert(std::string nameIn, double salary);
	void  display();
	void deleteMostRecent();
	void getSalary(std::string name);


private:
	EmployeeListNode *head;

};
