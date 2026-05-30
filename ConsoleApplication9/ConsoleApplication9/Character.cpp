#include "Character.h"
#include <string>

void Character::printStatus(const char* name, int hp, int attack)
{
	std::cout << name << std::endl;
	std::cout << hp << std::endl;
	std::cout << attack << std::endl;
	name_ = name;
	hp_ = hp;
	attack_ = attack;
}