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
	void StatusUpdata(const char* name, int hp, int attack);

	void printStatus();
};