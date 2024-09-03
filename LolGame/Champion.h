#pragma once
#include <string>
using namespace std;

class Champion
{
public:
	Champion();
	~Champion();
	string strName;
	int iHP;
	int iAtk;
	float fHitRatio;
	float fDefRatio;
	float fCritical;
	bool isDie();
	virtual bool Attack();
	virtual bool Defence();
};