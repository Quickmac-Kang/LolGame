
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
	cout << strName << "�� ������ �õ� �Ѵ�." << endl;
	return false;
}

bool Champion::Defence()
{
	cout << strName << "�� �� �õ� �Ѵ�." << endl;
	return false;
}
