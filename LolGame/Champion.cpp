
#include <iostream>
#include "Champion.h"


Champion::Champion()
{
	strName = "name";
	iHP = 0;
	iAtk = 0;
	fHitRatio = 0.0f;
	fDefRatio = 0.0f;
	fCritical = 0.0f;
}

Champion::~Champion()
{
}

bool Champion::isDie()
{
	if (iHP <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Champion::Attack()
{
	cout << strName << "이 공격을 시도 한다." << endl;
	return false;
}

bool Champion::Defence()
{
	cout << strName << "이 방어를 시도 한다." << endl;
	return false;
}
