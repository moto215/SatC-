#pragma once
#include <string>
#include <iostream>

class Character
{
private:
	std::string  name_;
	int hp_;
	int attack_;
public:
	void printStatus(const char* name, int hp, int attack);
};