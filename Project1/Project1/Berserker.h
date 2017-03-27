#pragma once
#include "Warrior.h"
class Berserker :public Warrior
{
public:
	Berserker(std::string name, int startingHealth, std::string swordType);
	~Berserker();
};

