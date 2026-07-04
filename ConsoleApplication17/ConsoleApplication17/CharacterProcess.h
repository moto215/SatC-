#pragma once
#include <memory>
#include "Character.h"

class CharacterProcess
{
public:
	void attack();
	//void dead();

public:
	std::shared_ptr<Character> player_ = {};
	std::shared_ptr<Character> slime_ = {};
	std::shared_ptr<Character> goblin_ = {};

private:
	bool enemy1 = true;
	bool enemy2 = true;

private:
	const int deathHP = 0;
};