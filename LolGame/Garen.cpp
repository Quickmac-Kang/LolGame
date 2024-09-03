#include <iostream>
#include "Garen.h"


Garen::Garen()
{
	isKnife = false;
}

Garen::Garen(string name, int hp, int atk, float hr, float fd, float fc, bool isknife)
{
	strName = name;
	iHP = hp;
	iAtk = atk;
	fHitRatio = hr;
	fDefRatio = fd;
	fCritical = fc;
	isKnife = isknife;
}

Garen::~Garen()
{
}

bool Garen::Attack()
{
	Champion::Attack();

	if (fHitRatio > rand() % 100)
	{
		cout << strName << "이 공격에 성공 했다." << endl;
		return true;
	}
    return false;
}

bool Garen::Defence()
{
	Champion::Defence();
	if (fDefRatio > rand() % 100)
	{
		cout << strName << "이 방어에 성공 했다." << endl;
		return true;
	}
	else
	{
		int t = (rand() % 10) + 10;
		iHP -= t;
		cout << strName << "의 HP 가 " << t << "만큼 소모되어 " << iHP << "남았다" << endl;
		return false;
	}

}
