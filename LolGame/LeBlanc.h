#pragma once
#include "Champion.h"

class LeBlanc : public Champion
{
public:
	LeBlanc();
	LeBlanc(string name, int hp, int atk, float hr, float fd, float fc, bool iswand);
	~LeBlanc();
	bool isWand;
	bool Attack() override;
	bool Defence() override;
};