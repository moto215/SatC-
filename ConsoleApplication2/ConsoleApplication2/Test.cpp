#include "Test.h"
#include <iostream>

Test::Test()
{
	std::cout << "コンストラクタ" << std::endl;
}

Test::~Test()
{
	std::cout << "デストラクタ" << std::endl;
}