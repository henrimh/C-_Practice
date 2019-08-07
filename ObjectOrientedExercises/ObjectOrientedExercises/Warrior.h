#pragma once
#include "Character.h"
#include <string>

class Warrior : Character
{

public:
	Warrior();
	Warrior(int, std::string);
	void Attack();
};

