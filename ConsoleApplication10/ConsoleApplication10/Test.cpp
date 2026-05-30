#include "Test.h"

Test::Test() 
{
	std::cout << "引数なしコンストラクタ" << std:: endl;
}

Test::Test(int num)
{
	std::cout << "引数付きコンストラクタ" << std::endl;
}

Test::Test(const Test& test) 
{
	std::cout << "コピーコンストラクタ" << std::endl;
}

Test::~Test()
{
	std::cout << "デストラクタ" << std::endl;
}

void NumTest(int num)
{

}