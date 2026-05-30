#include "Character.h"
#include <string>

void Character::printStatus()
{
	std::cout << "–¼‘O " << name_ << std::endl;
	std::cout << "HP " << hp_ << std::endl;
	std::cout << "UŒ‚—Í " << attack_ << std::endl;
	std::cout << "-------------" << std::endl;
}

void Character::StatusUpdata(const char* name, int hp, int attack)
{
	name_ = name;
	hp_ = hp;
	attack_ = attack;
	printStatus();
}