#ifndef __PERMANENTWORKER_H__
#define __PERMANENTWORKER_H__

class PermanentWorker
{
private:
	char name[100];
	int salary;

public:
	PermanentWorker(const char * name, int money);
	int GetPay() const;
	void ShowSalaryInfo() const;
};

#endif