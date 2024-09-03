#pragma once
#include "Champion.h"

class Garen : public Champion
{
public:
	Garen();
	Garen(string name, int hp, int atk, float hr, float fd, float fc, bool isknife);
	~Garen();

	bool isKnife;
	bool Attack() override;
	bool Defence() override;
};
