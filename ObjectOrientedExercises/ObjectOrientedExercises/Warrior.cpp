#include "Warrior.h"
#include <iostream>
#include <string>


Warrior::Warrior()
{
	Health = 10;
	Catchphrase = "Default WarCry";
}

Warrior::Warrior(int h, std::string s)
{
	Health = h; 
	Catchphrase = s;
}

void Warrior::Attack()	
{
	std::cout << "SWOOSH! " << '\n' << Catchphrase << '\n';
}
