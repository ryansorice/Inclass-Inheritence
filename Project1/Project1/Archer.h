#pragma once
#include "Character.h"
#include <string>
class Archer : public Character
{
private:
	std::string _bowType;
public:
	Archer(std::string name, int startingHealth, std::string bowType);
	~Archer();
};

