#include <iostream>
#include "LeBlanc.h"

LeBlanc::LeBlanc()
{
	isWand = false;
}

LeBlanc::LeBlanc(string name, int hp, int atk, float hr, float fd, float fc, bool iswand)
{
	strName = name;
	iHP = hp;
	iAtk = atk;
	fHitRatio = hr;
	fDefRatio = fd;
	fCritical = fc;
	isWand = iswand;
}

LeBlanc::~LeBlanc()
{
}

bool LeBlanc::Attack()
{
	Champion::Attack();
	if (fHitRatio > rand() % 100)
	{
		cout << strName << "�� ���ݿ� ���� �ߴ�." << endl;
		return true;
	}
    return false;
}

bool LeBlanc::Defence()
{
	Champion::Defence();
	if (fDefRatio > rand() % 100)
	{
		cout << strName << "�� �� ���� �ߴ�." << endl;
		return true;
	}
	else
	{
		int t = (rand() % 10) + 10;
		iHP -= t;
		cout << strName << "�� HP �� " << t << "��ŭ �Ҹ�Ǿ� " << iHP << "���Ҵ�" << endl;
		return false;
	}
}
