#include "EmployeeListNode.h"
#include <ioStream>
using namespace std;

EmployeeListNode::EmployeeListNode(string nameIn, double salaryIn)
{
	emp.name = nameIn;
	emp.salary = salaryIn;
	next = NULL;
}

