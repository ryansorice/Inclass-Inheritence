#pragma once
#include <string>
#include "Character.h"
class Warrior : public Character
{
private:
	std::string _swordType;
public:
	Warrior(std::string name, int startingHealth, std::string swordType);
	~Warrior();
	std::string Taunt();
};

