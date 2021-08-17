#ifndef __PRINTER_H__
#define __PRINTER_H__

namespace PRI_CONST
{
	enum 
	{
		STR_LEN = 100
	};
}

class Printer
{
private:
	char str[PRI_CONST::STR_LEN];

public:
	void SetString(const char * str);
	void ShowString();
};


#endif