#include <stdio.h>
#include <iostream>
#include <memory>
#include "Test.h"

int main()
{
	std::unique_ptr<Test> testPrt = std::make_unique<Test>();

	return 0;
}