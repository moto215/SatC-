#include <iostream>
#include "Test.h"

int main()
{
	Test test1;
	Test* test2 = new Test();
	delete test2;
	std::cout << "test2を破棄" << std::endl;

	return 0;
}