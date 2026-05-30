#pragma once
#include <string>
#include <iostream>

class Test
{
public:
	Test(); // Test() = defalt;
	Test(int num);
	Test(const Test& test);
	~Test();
	void NumTest(int num);
};