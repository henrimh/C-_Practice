#pragma once
#include <string>

class Character
{
protected:
	int Health = 0;
	std::string Catchphrase = "Yolo";
	
public:
	virtual void Attack() = 0;

};