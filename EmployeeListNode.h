#pragma once
#include <string>


typedef struct Employee {
	friend class EmployeeListNode;
	std::string name;
	double salary;
};

class EmployeeListNode {
	friend class ListOfEmployee;
public:
	EmployeeListNode(std::string nameIn, double salary);
	
private:
	Employee emp;
	EmployeeListNode *next;
};
typedef EmployeeListNode* EmployeeListNodePtr;

