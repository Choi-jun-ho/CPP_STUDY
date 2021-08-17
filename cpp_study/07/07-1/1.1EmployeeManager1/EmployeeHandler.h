#ifndef __EMPLOYEEHANDLER_H__
#define __EMPLOYEEHANDLER_H__
#include "PermanentWorker.h"

class EmployeeHandler
{
private:
	PermanentWorker* empList[50];
	int empNum;

public:
	EmployeeHandler();
	void AddEmployee(PermanentWorker* emp);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;
	~EmployeeHandler();
};

#endif