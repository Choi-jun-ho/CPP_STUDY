#ifndef __NAMECARD_H__
#define __NAMECARD_H__

namespace COMP_POS 
{
	enum {
		CLERK = 1, SENIOR, ASSIST, MANAGER
	};
}

class NameCard
{
private:
	char * name;
	char * companyName;
	char * phoneNum;
	int rank;
public:
	NameCard(const char * named, const char * comName, const char * phone, int ranking);
	void ShowNameCardInfo() const;
	~NameCard();
};

#endif